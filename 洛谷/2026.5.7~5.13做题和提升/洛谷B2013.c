#include<stdio.h>

int main()
{
	double F,C;
	
	scanf("%lf",&F);
	
	C=5*(F-32)/9*1.0;
	
	printf("%.5f",C);
	
	return 0;
}
