#include<stdio.h>
int max(int a,int b);

int main()
{
	int a,b;
	
	scanf("%d%d",&a,&b);
	
	printf("%d",max(a,b));
	
	return 0;
}
int max(int a,int b)
{
	int m;
	
	m=a>b?a:b;
	
	return m;
}
