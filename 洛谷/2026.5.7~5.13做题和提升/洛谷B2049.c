#include<stdio.h>

int main()
{
	int max,a,b;
	
	scanf("%d %d %d",&max,&a,&b);
	
	if(a>max)
		max=a;
	if(b>max)
		max=b;
	
	printf("%d",max);
	
	return 0;
}
