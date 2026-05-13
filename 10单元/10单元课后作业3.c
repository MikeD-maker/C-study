#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void find(char *name[],int n,int *p); 

int main()
{
	char *name[10];
	int n,i,max;
	
	scanf("%d",&n);
	getchar();//吃掉缓冲区的回车，防止被gets误用 
	for(i=0;i<n;i++)//边分配内存边录入信息 
	{
		name[i]=(char*)malloc(11*sizeof(char));//对指针数组初始化的同时录入字符串 我要最多存11个，5个字符，5个*，1个\0 
		gets(name[i]);
		while(strstr(name[i],"*****")==NULL||strlen(name[i])>10)
		//长度大于10是因为5个有效字符，5个*，1个\0，但是\0不算是有效长度，name[i]中没有找到“*****”只要一个不满足就重新输入 
		{
			printf("请按照格式和长度重新输入对应的字符串:"); 
			gets(name[i]);
		}
	}//或者也可以先读入一个字符串，然后求长度，更省空间 ，我觉得也可以分配完内存再进行录入信息更清晰一些 
	
	find(name,n,&max);
	
	printf("最大字符串是%s",name[max]);//输出最大下标的字符串 
	
	for(i=0;i<n;i++)
		free(name[i]);//释放内存 
	
	return 0; 
}
void find(char *name[],int n,int *p)
{
	int i;
	
	*p=0;//先假设第一个是最大的，这里main函数里面的max也变成0了
	for(i=1;i<n;i++)
		if(strcmp(name[i],name[*p])>0)
			*p=i;//比大小操作，如果i的大，那就更新*p，也就是更新max的值了 
} 
