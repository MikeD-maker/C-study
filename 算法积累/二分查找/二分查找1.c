#include<stdio.h>

int main()
{
	int arr[7]={1,3,5,7,9,11,13},target=7,left,mid,right,flag=0;//flag为0表示没找到，1为找到了 
	
	left=0;
	right=6;
	while(left<=right)//此处循环条件错了，刚开始写成left>right了 
	{
		mid=(left+right)/2;
		if(arr[mid]==target)
		{
			flag=1;
			break;
		}
		else if(arr[mid]>target)
			right=mid-1;
		else
			left=mid+1;
	}
	if(flag==0)
		printf("No Found"); 
	else
		printf("下标为%d,其中的数为%d",mid,arr[mid]);
		
	return 0;
}
