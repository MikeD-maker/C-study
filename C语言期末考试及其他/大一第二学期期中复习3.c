#include<stdio.h>
#include<string.h>

int main()
{
	char str[101],ch;
	int i;
	
	gets(str);
	ch=*str;
	for(i=0;i<strlen(str)-1;i++)
		*(str+i)=*(str+i)+*(str+i+1);
	*(str+i)=*(str+i)+ch;
	
	puts(str);
	
	return 0;
}
