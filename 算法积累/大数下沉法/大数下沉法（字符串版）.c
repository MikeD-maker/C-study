#include<stdio.h>
#include<string.h>
void sort(char a[][100],int n); 

int main()
{
	char str[10][100];
	int n,i;
	
	scanf("%d",&n);
	getchar();//此处需要有缓冲区 
	for(i=0;i<n;i++)
		fgets(str[i],sizeof(str[i]),stdin);
		
	sort(str,n);
	
	for(i=0;i<n;i++)
		puts(str[i]);
		
	return 0;
}
void sort(char a[][100],int n)
{
	char temp[100];
	int i,j,index,flag;
	
	index=n-1;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<index;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
				flag=j;
			}
		}
		index=flag;
		if(flag==0)
			break;
	}
}
