#include<stdio.h>
void sort(int arr[],int n);

int main()
{
	int arr[100],n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d ",arr+i);
		
	sort(arr,n);
	
	for(i=0;i<n;i++)
		printf("%d",*(arr+i));
		
	return 0;
}
void sort(int arr[],int n)
{
	int i,j,flag,temp,index;
	
	index=n-1;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<index;j++)
			if(arr[j]%2==0&&arr[j+1]%2!=0)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=j;
			}
		index=flag;
		if(flag==0)
			break;
	}
}
