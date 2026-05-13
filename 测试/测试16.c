#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5},*p,*q;
	
	p=a;
	q=a+4;
	
	for(;q>=p;q--)
		printf("%d ",*q);
		
	return 0;
}
