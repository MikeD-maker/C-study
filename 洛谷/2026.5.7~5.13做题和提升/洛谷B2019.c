#include<stdio.h>

int main()
{
	int a;
	_Bool b;//或者include《stdbool.h》再用bool 
	
	scanf("%d",&a);
	
	b=(_Bool)a;
	a=(int)b;
	
	printf("%d",a);
	
	return 0;
}
