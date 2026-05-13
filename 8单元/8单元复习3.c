#include<stdio.h>
int my_len(const char *s); 

int main()
{
	char str[100];
	int len;
	
	fgets(str,sizeof(str),stdin);
	
	len=my_len(str);
	printf("%d",len);
	
	return 0;
}
int my_len(const char *s)
{
	int i=0;
	
	for(;s[i]!='\0';i++)
		continue;
	return i;
}
