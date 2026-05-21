#include<stdio.h>

int main()
{
	int i,n;
	double e=1;
	long long fact=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		e=e+1.0/fact;
	}
	
	printf("%.10lf",e);
	
	return 0;
}
