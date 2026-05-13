#include<stdio.h>
void swap(int *p_a,int *p_b);

int main()
{
	int a=3,b=5;
	
	swap(&a,&b);
	
	printf("%d %d",a,b);
	return 0;
}
void swap(int *p_a,int *p_b)
{
	int t;
	
	t=*p_a;
	*p_a=*p_b;
	*p_b=t;
}
