#include<stdio.h>
#include<math.h>

int main()
{
	double xa,ya,xb,yb;
	
	scanf("%lf %lf",&xa,&ya);
	scanf("%lf %lf",&xb,&yb);
	
	printf("%.3f",sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)));
	
	return 0;
}
