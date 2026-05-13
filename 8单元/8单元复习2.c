#include<stdio.h>
void swap(int *p,int *q);

int main()
{
	int m,n;
	
	m=10;
	n=20;
	printf("%d %d\n",m,n);
	
	swap(&m,&n);
	printf("%d %d",m,n);
	
	return 0;
}
void swap(int *p,int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}
