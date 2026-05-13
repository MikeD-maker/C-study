#include<stdio.h>
int find(char *str1,char *str2,char str[]);
void DuiZhao(char str[],char s[]);
void FanYi(char str3[],char s[]);

int main()
{
	char str1[101],str2[101],str3[101],str[27],s[27];//str1为加密信息str2为该加密信息的原信息str3为需要翻译的信息 
	int i,flag;
	
	gets(str1);
	gets(str2);
	gets(str3);
	for(i=0;i<27;i++)
		str[i]=' ';
	
	flag=find(str1,str2,str);
	if(flag==1)
	{
		printf("Failed");
		return 0;
	}
	
	DuiZhao(str,s);
	FanYi(str3,s);
	
	puts(str3);
	
	return 0; 
}
int find(char *str1,char *str2,char str[])
{
	int flag=0,j,i=0;
	
	for(;str2[i]!='\0';i++)
	{
		j=str2[i]-'A'+1;
		if(str[j]==' ')
			str[j]=str1[i];
		else if(str[j]==str1[i])
			continue;
		else
		{
			flag=1;
			break;//一个字母有不同的密码，则failed 
		}
	}
	for(i=1;i<27;i++)
		if(str[i]==' ')
			flag=1;//A-Z有没对应的，则代表failed 
	return flag;
}
void DuiZhao(char str[],char s[])
{
	int i,j;
	
	for(i=1;i<27;i++)
	{
		j=str[i]-'A'+1;
		s[j]=(char)i+'A'-1;
	}
}
void FanYi(char str3[],char s[])
{
	int i,j;
	
	for(i=0;str3[i]!='\0';i++)
	{
		j=str3[i]-'A'+1;
		str3[i]=s[j];
	}
}
