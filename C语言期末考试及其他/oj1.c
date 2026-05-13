#include<stdio.h>

int main()
{
	int n,i;
	char a[100];
	
	scanf("%d",&n);
	sprintf(a,"%d",n);
	
	for(i=0;a[i]!='\0';i++)
		printf("%c ",a[i]);
	
	return 0;
}
