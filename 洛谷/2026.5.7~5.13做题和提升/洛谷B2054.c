#include<stdio.h>

int main()
{
	int i,n,age,sum=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&age);
		sum+=age;
	}
	
	printf("%.2f",sum*1.0/n);
	
	return 0;
}
