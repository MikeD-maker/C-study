#include<stdio.h>

int main()
{
	int i,n;
	double sum,flag;
	
	sum=0;
	flag=1.0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=flag*i/(2*i-1);
		flag=-flag;
	}
	
	printf("%.3f",sum);
	
	return 0;
	
}
