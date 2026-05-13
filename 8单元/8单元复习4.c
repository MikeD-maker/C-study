#include<stdio.h>
void my_strcpy(char *dext,const char *src);

int main()
{
	char str1[20],str2[20];
	
	gets(str1);//gets函数会吃掉回车，不用考虑缓冲区回车问题 
	gets(str2);
	
	my_strcpy(str1,str2);
	
	puts(str1);
	
	return 0;
}
void my_strcpy(char *dext,const char *src)
{
	while(*src!='\0')
		*dext++=*src++;
	
	*dext='\0';
}
