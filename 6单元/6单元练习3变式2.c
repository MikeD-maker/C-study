#include<stdio.h>
#define N 1000

void PrintIndex(int a[]);

int main()
{
	int a[N]={0};
	int n,num;
	
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d",&num);
		a[num]++;
	}
	
	PrintIndex(a);
	
	return 0;
}
void PrintIndex(int a[])
{
	int i;
	for(i=0;i<N;i++)
		if(a[i]>0)
			printf("%d ",i);
}

