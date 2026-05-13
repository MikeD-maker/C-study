#include<stdio.h>

int main()
{
	const double PI=3.14159;
	double r;
	
	scanf("%lf",&r);
	
	printf("%.4f %.4f %.4f",2*r,2*r*PI,PI*r*r);
	
	return 0;
} 
