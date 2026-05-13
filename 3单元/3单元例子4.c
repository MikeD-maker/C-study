#include<stdio.h>

int main()
{
	char ch;
	
	ch=getchar();
	
	if(ch>='a'&&ch<='z')
		printf("lower case");
	else if(ch>='A'&&ch<='Z')
		printf("upper case");
	else
		printf("not case");
		
	return 0;
 } 
