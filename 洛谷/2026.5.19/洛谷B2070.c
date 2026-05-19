#include<stdio.h>

int main()
{
	int i,n,flag=1;
	double sum=0.0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=flag*1.0/i;
		flag*=-1;
	}
	
	printf("%.4f",sum);
	
	return 0;
}
