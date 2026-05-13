#include<stdio.h>
#include<string.h>
void delchar(char str[],char ch);

int main()
{
	char str[80],ch;
	
	gets(str);

	scanf("%c",&ch);
	
	delchar(str,ch);
	
	puts(str);
	
	return 0;
}
void delchar(char str[],char ch)
{
	char *p;
	p=strchr(str,ch);
	if(p==NULL)
		return;
	else
	{
		*p=' ';
		return delchar(str,ch);//重复调用函数，直到找不到该字符，返回主函数 
	}
}
