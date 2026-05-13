#include<stdio.h>
void InputArr(int a[],int n);
void SortArr(int a[],int n);
int PArr(int a[],int n,int b[]);
void PutArr(int a[],int n);

int main()
{
	int i,n,m,a[10],b[10];
	
	scanf("%d",&n);
	InputArr(a,n);
	
	SortArr(a,n);
	
	m=PArr(a,n,b);
	
	PutArr(b,m);
	
	return 0;
}
void InputArr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void SortArr(int a[],int n)
{
	int i,j,temp;
	
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
				temp=a[j],a[j]=a[j+1],a[j+1]=temp;
}
int PArr(int a[],int n,int b[])
{
	int i,j=0,m=1;
	b[0]=a[0];
	for(i=1;i<n;i++)
		if(a[i]!=a[i-1])
			b[++j]=a[i],m++;
	
	return m;
}
void PutArr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
