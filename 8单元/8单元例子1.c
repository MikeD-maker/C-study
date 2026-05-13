#include<stdio.h>

int main()
{
	int a[5]={2,4,6,8,10},*p,*q;
	
	p=a;
	q=&a[4];
	
	for(;p<=q;p++)
		printf("%d ",*p);
		
	return 0;
}
