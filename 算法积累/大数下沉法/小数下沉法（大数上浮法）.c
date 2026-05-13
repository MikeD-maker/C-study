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
	int i,j,temp,flag,index;
	
	index=n-1;
	for(i=0;i<n-1;i++)//也可以写成while（index>0)但是会影响可读性，我还是保留这种方法吧，以后有机会可以尝试用while的形式； 
	{
		flag=0;
		for(j=0;j<index;j++)
			if(arr[j]<arr[j+1])
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
