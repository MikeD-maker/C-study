#include<stdio.h>
#include<math.h>

int main()
{
	int x,n;
	
	scanf("%d %d",&x,&n);
	
	printf("%.4f",x*pow((1+0.001),n));
	
	return 0;
}
