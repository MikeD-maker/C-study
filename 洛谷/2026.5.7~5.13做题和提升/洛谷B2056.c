#include<stdio.h>

int main()
{
	int n,i,num,sum=0;
	
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		sum+=num;
	}
	
	printf("%d %.5f",sum,sum*1.0/n);
	
	return 0;
}
