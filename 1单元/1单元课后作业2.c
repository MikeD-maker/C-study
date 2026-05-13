#include<stdio.h>

int main()
{
	int a1,d,n,s;
	
	scanf("%d%d%d",&a1,&d,&n);
	
	s=n*a1+d*n*(n-1)/2.0;
	
	printf("%d",s);
	
	return 0;
}
