#include<stdio.h>
int SumArr(int a[],int n); 

int main()
{
	int i,n,a[10];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("%d",SumArr(a,n));
	
	return 0;
}
int SumArr(int a[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
		sum+=a[i];
	
	return sum;
}
