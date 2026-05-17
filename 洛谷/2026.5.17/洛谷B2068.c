#include<stdio.h>

int main()
{
	int i,j,n,m,num[4],count=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<4;j++)
		{
			num[j]=m%10;
			m/=10;
		}
		if(num[0]-num[3]-num[2]-num[1]>0)
			count++;
	}
	
	printf("%d",count);
	
	return 0;
}
