#include<stdio.h>

int main()
{
	int x,a,b,y;
	
	scanf("%d %d %d %d",&x,&a,&y,&b);
	
	printf("%.2lf",(b*y-a*x)*1.0/(b-a));
	
	return 0;
}
