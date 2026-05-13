#include<stdio.h>

int main()
{
	double num,sum=0.0;
	int i,n;
	
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&num);
		sum+=num;
	}
	
	printf("%f",sum/n);
	
	return 0;
}
