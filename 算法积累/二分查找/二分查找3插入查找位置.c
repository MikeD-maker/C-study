#include<stdio.h>
void lower_bound(int arr[],int len,int target);

int main()
{
	int arr[5]={1,3,5,7,9},target=5;
	
	lower_bound(arr,5,target);
	
	return 0;
}
void lower_bound(int arr[],int len,int target)
{
	if(len<=0)
	{
		printf("-1");
		return;
	}
	int left,mid,right,flag=-1;//用-1不用0是为了防止下标为0 
	
	left=0;
	right=len-1;
	
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==target)
		{
			flag=mid;
			break;
		}
		else if(arr[mid]>target)
			right=mid-1;
		else
			left=mid+1;
	}
	if(flag!=-1)
		printf("该数组中已经存在此数，且下标为%d",flag);
	else if(arr[mid>target])
		printf("该数组中不存在此数，插入在下标%d位置",mid-1);
	else
		printf("插入在%d",mid+1);
}
