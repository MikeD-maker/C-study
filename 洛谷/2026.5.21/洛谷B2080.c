#include<stdio.h>
#include<math.h>

int main()
{
	double x,sum=0.0;
	int i,n;
	
	scanf("%lf %d",&x,&n);
	
	for(i=0;i<=n;i++)
		sum+=pow(x,i);
	
	printf("%.2f",sum);
	
	return 0;
}
