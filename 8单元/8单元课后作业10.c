#include<stdio.h>
#include<string.h>

int main()
{
	char str[101];
	int i,len;
	
	gets(str);
	str[101]=str[0];
	len=strlen(str);
	for(i=0;i<len-1;i++)
		str[i]=str[i]+str[i+1];
	str[i]=str[i]+str[101];
	str[101]='\0';
	
	puts(str);
	
	return 0;
}
