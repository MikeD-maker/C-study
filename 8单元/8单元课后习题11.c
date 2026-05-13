#include<stdio.h>
#include<string.h>
void nizhi(char *str); 

int main()
{
	char str[100];
	
	gets(str);
	
	nizhi(str);
	
	puts(str);
	
	return 0;
}
void nizhi(char *str)
{
	char t,*p=str,*q;
	
	q=str+strlen(str)-1;
	while(*q=='0')
		q--;//去除后导0完成，并且q一定指向最后一个非0字符
	if(*p=='-')
		p++;//将正负情况统一为正来处理，是负号直接跳过即可
	
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	} //实现字符串逆置 
}
