#include<stdio.h>

int main()
{
	double p[31]={0,1},q[31]={0,2},sum=2.0;
	int i,n;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		p[i]=q[i-1];
		q[i]=q[i-1]+p[i-1];
		sum+=q[i]/p[i];
	}
	
	printf("%.4f",sum);
	
	return 0;
}
