#include<stdio.h>
void binarySearch(int a[],int len,int target); 

int main()
{
	int arr[]={2,5,8,12,16,23,38,45,56,72},target=23;
	
	binarySearch(arr,10,target);
	
	return 0;
}
void binarySearch(int a[],int len,int target)
{
	if(len<=0)
		return;
	int left,right,mid,flag=-1;
	
	left=0;
	right=len-1;
	
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]==target)
		{
			flag=mid;
			break;
		}
		else if(a[mid]>target)
			right=mid-1;
		else
			left=mid+1;
	}
	if(flag==-1)
		printf("未找到");
	else
		printf("下标为%d",flag); 
}
