#include<stdio.h>

int main()
{
	int i;
	double high,sum;
	
	scanf("%lf",&high);
	
	sum=high;
	for(i=2;i<=10;i++)
	{
		sum+=high;
		high/=2;
	}
	
	printf("%g\n%g",sum,high/2);
	
	return 0;
}
