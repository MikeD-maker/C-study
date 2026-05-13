#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,max,i,*p,*q;
	
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	q=p;
	max=*p;
	for(;q<=p+n-1;q++)
		if(max<*q)
			max=*q;
	
	printf("%d",max);
	
	return 0;
}
