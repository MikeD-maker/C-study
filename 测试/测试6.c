#include<stdio.h>
void delchar(char *p,char ch); 

int main()
{
	char str[80],ch;
	
	gets(str);
	scanf("%c",&ch);
	
	delchar(str,ch);
	
	puts(str);
	
	return 0;
}
void delchar(char *p,char ch)
{
	char *q=p;
	
	while(*p!='\0')
	{
		if(*p==ch)
			p++;
		else
			*q++=*p++;
	}
	*q='\0'; 
}
