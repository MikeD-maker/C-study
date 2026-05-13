#include<stdio.h>//左边界 
void findLeftBound(int arr[],int len,int target);

int main()
{
	int arr[7]={1,2,3,3,3,4,5},target=3;
	
	findLeftBound(arr,7,target);
	
	return 0;
}
void findLeftBound(int arr[],int len,int target)
{
	int left,mid,right,flag=0;
	
	left=0;
	right=len-1;
	
	while(left<=right)
	{
		mid=(left+right)/2;//此处忘记初始化了 
		if(arr[mid]==target)
		{
			if(arr[mid-1]==target)
				right=mid-1;
			else
			{
				flag=1;
				break;
			}//更简单一点的是把此时的下标用result储存下来，继续向左边找，最后返回result就行了 
		}
		else if(arr[mid]>target)
			right=mid-1;
		else
			left=mid+1;
	} 
	
	if(flag==0)
		printf("-1");
	else
		printf("%d",mid);
}
