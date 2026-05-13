#include<stdio.h>

int main()
{
	int i,n,a[10]={1,2,4,7,8,11,16,21,35};
	
	scanf("%d",&n);
	
	for(i=8;i>=0;i--)
	{
		if(n<a[i]&&n>a[i-1])
		{
			a[i+1]=a[i];
			a[i]=n;
			break;
		}
		else
			a[i+1]=a[i];
	}
	
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	
	return 0;
}
