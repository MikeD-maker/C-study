#include<stdio.h>

int main()
{
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);//scanf要的是地址，一定记清楚 
	
	printf("%d",(a+b)/c);
	
	return 0;
}
