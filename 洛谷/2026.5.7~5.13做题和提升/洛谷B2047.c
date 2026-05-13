#include<stdio.h>

int main()
{
	double x,y;
	
	scanf("%lf",&x);
	
	if(x>=0.0&&x<5.0)
		y=-x+2.5;
	else if(x>=5.0&&x<10.0)
		y=2.0-1.5*(x-3.0)*(x-3.0);
	else
		y=x/2.0-1.5;
	
	printf("%.3f",y);

	return 0;
}
