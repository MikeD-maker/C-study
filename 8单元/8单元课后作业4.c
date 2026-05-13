#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char *p,*q;
	
	gets(str);
	
	p=strchr(str,'.');
	if(p==NULL)
	{
		printf("请输入一个浮点数"); 
		return 0; 
	}
	else
		p++; //作为输出的第一个下标 
	q=str+strlen(str)-1;
	while(1)
	{
		if(*q=='0')
			q--;
		else
		{
			*++q='\0';
			break;
		}
	}
	printf("0.");
	for(;p<=q;p++)
		printf("%c",*p);
	
	return 0;
}
