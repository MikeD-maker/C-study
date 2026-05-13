#include<stdio.h>
#define N 10
void InputArr(int a[N][N],int n,int m);
int SumArr(int a[N][N],int n,int m);

int main()
{
	int a[N][N],n,m,sum;
	
	scanf("%d%d",&n,&m);
	
	InputArr(a,n,m);
	
	sum=SumArr(a,n,m);
	
	printf("%d",sum);
	
	return 0;
}
void InputArr(int a[N][N],int n,int m)
{
	int i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
int SumArr(int a[N][N],int n,int m)
{
	int i,j,sum=0;
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			sum+=a[i][j];
	
	return sum; 
}
