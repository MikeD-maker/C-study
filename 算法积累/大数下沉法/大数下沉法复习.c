#include<stdio.h>
void sort(int a[],int n);

int main()
{
	int arr[]={64,34,25,12,22,11,90};
	
	sort(arr,7);
	
	return 0;
}
void sort(int a[],int n)
{
	int i,j,temp,index,flag;
	
	index=n-1;
	for(i=0;i<n-1;i++)
	{
		flag=0;//每一轮的标志都要重置，当时忘了，现在补上 
		for(j=0;j<index;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=j;
			}
		index=flag;
		if(flag==0)
			break;
	}
}
