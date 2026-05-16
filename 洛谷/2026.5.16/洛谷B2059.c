#include<stdio.h>

int main()
{
	int m,n,sum=0;
	
	scanf("%d %d",&m,&n);
	
	if(m%2==0)
		m+=1;
	if(n%2==0)
		n-=1;
	
	for(;m<=n;m+=2)
		sum+=m;
	
	printf("%d",sum);
	
	return 0;
}
