#include<stdio.h>

int main()
{
	int arr[20]={2,4,5,6,7,8},*p,*q;
	
	p=arr;
	q=arr;
	
	printf("%d",*p);
	printf("%d",*q);
	printf("%d",*p++);
	printf("%d",*++q);
	
	return 0;
}
