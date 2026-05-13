#include<stdio.h>
typedef struct rectangle
{
	double width;//¿í
	double height;//¸ß 
}RECTANGLE;
void enlarge(RECTANGLE *r,double factor); 

int main()
{
	double factor;
	RECTANGLE s;
	
	scanf("%lf",&factor);
	scanf("%lf %lf",&s.width,&s.height);
	
	enlarge(&s,factor);
	
	printf("%lf %lf",s.width,s.height);
	
	return 0;
}
void enlarge(RECTANGLE *r,double factor)
{
	r->width=r->width*factor;
	r->height=r->height*factor;
}
