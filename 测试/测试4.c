#include<stdio.h>

int main()
{
	int a=10,*pa=&a;
	char *pb;
	
	pb=pa;
	
	printf("%d",*pb);
	 
	return 0;
}
