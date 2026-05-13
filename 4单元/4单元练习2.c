#include<stdio.h>

int main()
{
	int i,n,score,failNum=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&score);
		if(score<60)
			failNum++;
	}
	
	printf("%.2f",1.0*failNum/n);
	
	return 0;
}
