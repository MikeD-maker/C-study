#include<stdio.h>
void SortArr(int arr[],int n);

int main()
{
	int n,arr[80],i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",arr+i);
		
	SortArr(arr,n);
	
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
		
	return 0;
}
void SortArr(int arr[],int n)
{
	int i,j,temp,flag;
	
	for(i=0;i<n-1;i++)
	{
		flag=0;//这个排序方法是每排完一轮检查能否提前结束 我最开始没加上这句，我理解成第一轮就结束了 
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		if(flag==0)
			break;
	}
}
