#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int greater(char *s1,char *s2);
void sort(char **str,int n);

int main()//假设全部的长整数都是正数 
{
	int n,i;
	char **str,**str1,*p;//其中str1是str的副本，用来保存str中的原始指针的位置，方便释放  
	//如果直接用原来的str进行释放，由于更改了该指针数组里面的指针的值，会导致空间释放不完全 
	scanf("%d",&n);
	getchar();
	str=(char**)malloc(n*sizeof(char*));
	str1=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		*(str+i)=(char*)malloc(101*sizeof(char));
		gets(*(str+i));
		*(str1+i)=*(str+i); 
	}
	//下面去除每一个长整数的前导0 
	for(i=0;i<n;i++)
	{
		p=*(str+i);
		while(*p=='0')
			p++;
		*(str+i)=p;//把前导非0的地址重新存入指针数组中 
	}
	
	sort(str,n);
	printf("排序后输出\n");
	for(i=0;i<n;i++)
		printf("%s\n",*(str+i));
	
	for(i=0;i<n;i++)//关于此处为什么不边输出边释放，因为在分配内存的时候可能是连续的，如果这样做会导致数据丢失，所以输出完之后再释放 
		free(*(str1+i));
	free(str);
	free(str1);
	
	return 0;
}
int greater(char *s1,char *s2)
{
	char *p,*q;
	
	p=s1;q=s2;
	
	if(strlen(p)>strlen(q)) 
		return 1; //如果s1串长度大于s2返回1，说明前串大于后串 
	else if(strlen(p)<strlen(q))
		return -1;//如果s1串长度小于s2返回-1，说明前串小于后串 
	else//如果两个串长度相等逐位判断 
	{
		while(*p!='\0') 
		{
			if(*p>*q)
				return 1;//返回1说明前串大于后串 
			else if(*p<*q)
				return -1;//返回-1说明前串小于后串 
			p++; 
			q++; 
		}
		return 0;
	}		
}
void sort(char **str,int n)
{
	int i,j;
	char *temp;
	
	for(i=0;i<n;i++)//冒泡法排序 
		for(j=0;j<n-1-i;j++)
			if(greater(*(str+j),*(str+j+1))==1)//这个表示如果前面的字符串大于后面的字符串，交换地址 
			{
				temp=*(str+j);
				*(str+j)=*(str+j+1);
				*(str+j+1)=temp;
			}
} 
