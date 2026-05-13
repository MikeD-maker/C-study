#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	int m,n;
	
	gets(str);
	sscanf(str,"%d",&n);
	strrev(str);
	sscanf(str,"%d",&m);
	
	printf("%d",m+n);
	
	return 0;
	
}
