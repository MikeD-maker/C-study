#include<stdio.h>
#include<string.h>

int bijiao(char *s1,char *s2)
{
	char *p,*q;
	int len1,len2 ;
	
	p=s1;
	while(*p=='0')  //p去除前导0 
		p++;
	len1=strlen(p);   //计算p串长度 
	
	q=s2;
	while(*q=='0') //q去除前导0 
		q++;
	len2=strlen(q);
	
	if(len1>len2) 
		return 1;
	else if(len1<len2)
		return 0;
	else
	{
		while(*p!='\0')  //p不指向结束 
		{
			if(*p>*q) return 1; 
			if(*p<*q) return -1;
			p++;q++;
		}	
		return 0;
	}
}

int main()
{
	char str1[100],str2[100];
	
	gets(str1);
	gets(str2);
	
	printf("%d",bijiao(str1,str2));
	
	return 0;
}
