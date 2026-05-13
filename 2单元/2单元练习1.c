#include<stdio.h>

int main()
{
	int m=11,n=41;
	
	printf("%-8d%-8d%-8d\n",m*m,m*m*m,m*m*m*m);
	printf("%-8d%-8d%-8d",n*n,n*n*n,n*n*n*n);
	
	return 0;
}
