#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
	double a,b,c,x1,x2;
	bool is_exist;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	is_exist=(b*b-4*a*c)>=0.0;
	if(is_exist)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(fabs(x1-x2)<=1e-10)
			printf("x1=x2=%.5f",x1);
		else if(x1<x2)
			printf("x1=%.5f;x2=%.5f",x1,x2);
		else
			printf("x1=%.5f;x2=%.5f",x2,x1);
	}
	else
		printf("No answer!");
	
	return 0;
}
