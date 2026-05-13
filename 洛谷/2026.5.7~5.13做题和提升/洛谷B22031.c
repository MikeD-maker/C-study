#include<stdio.h>
#include<math.h>

int main()
{
	double s,x1,x2,x3,y1,y2,y3;
	
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	
	s=fabs(0.5*((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)));
	
	printf("%.2f",s);
	
	return 0;
}
