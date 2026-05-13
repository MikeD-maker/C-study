#include<stdio.h>

int main()
{
	int i,n,a[10],*p=a;
	
	scanf("%d",&n);
	for(p=a;p<=&a[n-1];p++)
		scanf("%d",p);
	for(p=a+n-1;p>=a;p--)
		printf("%d ",*p); 
	return 0;
}
