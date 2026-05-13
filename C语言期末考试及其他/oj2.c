#include<stdio.h>
#include<ctype.h>

int main()
{
	int i,count=0;
	char str[100];
	
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
		if(isdigit(str[i]))
			count++;
	
	printf("%d",count);
	
	return 0;
}
