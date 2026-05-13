#include<stdio.h>

int main()
{
	int n,i,gold,silver,copper,num_g,num_s,num_c,sum_mdeal;
	
	gold=silver=copper=sum_mdeal=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&num_g,&num_s,&num_c);
		gold+=num_g;
		silver+=num_s;
		copper+=num_c;
	}
	sum_mdeal=gold+silver+copper;
	
	printf("%d %d %d %d",gold,silver,copper,sum_mdeal);
	
	return 0;
}
