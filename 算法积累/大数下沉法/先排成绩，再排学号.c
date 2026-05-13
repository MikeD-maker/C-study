#include<stdio.h>
int searchend(int a[][2],int n,int start);
int searchstart(int a[][2],int n,int end);
void sort(int a[][2],int n);
void sortScore(int a[][2],int n);

int main()
{
	int arr[80][2],i,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&arr[i][0],&arr[i][1]);//每一行的0代表学号，1代表成绩
	
	sortScore(arr,n);
	sort(arr,n);
	
	for(i=0;i<n;i++)
		printf("学号为:%d成绩为:%d\n",arr[i][0],arr[i][1]);
		
	return 0; 
}
void sortScore(int a[][2],int n)
{
	int i,j,temp0,temp1,index,flag;
	
	index=n-1;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<index;j++)
			if(a[j][1]<a[j+1][1])
			{
				temp0=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=temp0;
				temp1=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=temp1;
				flag=j;
			}
		index=flag;
		if(flag==0)
			break;
	}
}
void sort(int a[][2],int n)
{
	int i,j,temp,index,flag,start,end=-1;
	
	while(1)
	{
		start=searchstart(a,n,end);
		if(start==-1)
			return;
		end=searchend(a,n,start);
		index=end;
		for(i=0;i<end-start;i++)
		{
			flag=0;
			for(j=start;j<index;j++)
				if(a[j][0]>a[j+1][0])
				{
					temp=a[j][0];
					a[j][0]=a[j+1][0];
					a[j+1][0]=temp;
					flag=j;
				}
			index=flag;
			if(flag==0)
				break;
		}
	}
}
int searchstart(int a[][2],int n,int end)
{
	int i;
	for(i=end+1;i<n-1;i++)
		if(a[i][1]==a[i+1][1])
			return i;
	if(i>=n-1)
		return -1;
}
int searchend(int a[][2],int n,int start)
{
	int i;
	for(i=start+1;i<n-1;i++)
		if(a[i][1]!=a[i+1][1])
			return i;
	return n-1;
}
