#include<stdio.h>
void InputArr(int a[],int n);
void SortArr(int a[],int n);
void PrnArr(int a[],int n);

int main()
{
	int n,a[10]; 
	
	scanf("%d",&n);
	InputArr(a,n);
	
	SortArr(a,n);
	
	PrnArr(a,n);
	
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
void PrnArr(int a[],int n) 
{
	int i;
	printf("%d ",a[0]);
	for(i=1;i<n;i++)
		if(a[i]!=a[i-1])
			printf("%d ",a[i]);
}
