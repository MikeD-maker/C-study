#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,people_num;
	double x,y,sum=0.0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf%d",&x,&y,&people_num);
		sum+=sqrt(x*x+y*y)/50*2+people_num*(1+0.5);
	}
	
	printf("%d",(int)ceil(sum));
	
	return 0;
}
