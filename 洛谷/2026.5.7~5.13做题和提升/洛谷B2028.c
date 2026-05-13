#include<stdio.h>
#include<string.h>
void Strrev(char *p);

int main()
{
	char str[5];//多两个位置一个是\n，一个是\0一定注意字符串的\0是占位置的 
	
	fgets(str,sizeof(str),stdin);
	
	str[strlen(str)-1]='\0';
	Strrev(str);
	
	puts(str);
	
	return 0;
}
void Strrev(char *p)
{
	char temp,*q=p+strlen(p)-1;
	
	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++,q--;
	}
}
