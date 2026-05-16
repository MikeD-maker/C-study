#include<stdio.h>

int main()
{
	int m,n,sum=0;
	
	scanf("%d %d",&m,&n);
	
	if(m%17!=0)
		m+=17-m%17;
	
	for(;m<=n;m+=17)
		sum+=m;
	
	printf("%d",sum);
	
	return 0;
}
