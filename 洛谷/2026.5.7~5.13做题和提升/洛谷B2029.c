#include<stdio.h>

int main()
{
	int r,h;
	double a;
	
	scanf("%d %d",&h,&r);
	
	a=(20+3.14*r*r*h*0.001-1)/(3.14*r*r*h*0.001);
	
	printf("%d",(int)a);
	
	return 0;
}
