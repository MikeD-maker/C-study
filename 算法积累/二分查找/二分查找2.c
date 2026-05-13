#include<stdio.h>
int QuChong(int arr[],int n);
void binarySearch(int arr[],int len,int target);

int main()
{
	int arr[7]={1,2,3,3,3,4,5},target=6,len;
	
	len=QuChong(arr,7);
	
	binarySearch(arr,len,target);
	
	
	return 0;
}
int QuChong(int arr[],int n)
{
	int i,j=1;
	
	for(i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
			arr[j++]=arr[i];
			
	}
	return j;//代表新的去重后的数组的长度 
}
void binarySearch(int arr[],int len,int target)
{
	int left,mid,right,flag=0;
	
	left=0;
	right=len-1;
	while(left<=right)
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
			left=mid+1;//这里最开始写成-1了，一定要注意这left和right的改变是如何改变的 
	}
	if(flag==0)
		printf("-1");
	else
		printf("下标为%d",mid); 
 } 
