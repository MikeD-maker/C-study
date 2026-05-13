#include<stdio.h>
typedef union data
{
	int i;
	char c;
	double d;
}DATA;

int main()
{
	DATA s;
	
	s.i=1;
	s.d=3.0;
	s.c='2';
	
	printf("%d ",sizeof(s));
	printf("%d %c %lf",s.i,s.c,s.d); 
	
	return 0;
}
