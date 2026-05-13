#include<stdio.h>//忘记声明函数，写着写着数组名又忘了 
void findRightBound(int arr[],int len,int target);

int main()
{
	int arr[7]={1,2,3,3,3,4,5},target=1;
	
	findRightBound(arr,7,target);
	
	return 0;
}
void findRightBound(int arr[],int len,int target)
{
	int left,right,mid,result=-1;
	
	left=0;
	right=len-1;
	
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==target)
		{
			result=mid;
			left=mid+1;
		}
		else if(arr[mid]>target)
			right=mid-1;
		else
			left=mid+1;
	}
	
	if(result==-1)
		printf("-1");
	else
		printf("%d",result);
}
