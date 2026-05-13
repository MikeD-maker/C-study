#include<stdio.h>
#include<math.h>

int main()
{
	double x,y;
	
	scanf("%lf %lf",&x,&y);
	
	printf("%f %f\n",ceil(x),floor(x));
	printf("%f %f\n",ceil(y),floor(y));
	
	return 0;
}
