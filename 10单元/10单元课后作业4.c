#include<stdio.h>
#include<stdlib.h>
void fun(char *pa[],int n); 

int main()
{
	int n,i;
	char *pa[5];
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		pa[i]=(char*)malloc(21*sizeof(char));
		gets(pa[i]); 
	}
	
	fun(pa,n);//冒泡排序 
	
	printf("按照字典排序如下\n");
	for(i=0;i<n;i++)//边输出边释放 
	{
		puts(pa[i]);
		free(pa[i]);
	}
	
	return 0;
}
void fun(char *pa[],int n)//数组传的都是地址，函数中改变，main中也改变  
{
	int i,j;
	char *temp;
	
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
			if(strcmp(pa[j],pa[j+1])>0)//因为strcmp函数的按照acsll码排序，这个码的字母是连续的，也可以说是按照字典排序 
			{
				temp=pa[j];
				pa[j]=pa[j+1];
				pa[j+1]=temp;//交换地址，更节省空间 
			} 
}
