#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[80];//用来储存输入的字符
	int i=0;//i用来数组代表下标或者循环 
	
	while(scanf("%c",&str[i]),str[i]!='@')
		i++;
	//此处输入结束	
	for(i=0;str[i]!='@';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=tolower(str[i]);//确保大写字母转换为小写 
		
		if(str[i]>='a'&&str[i]<='y')
			str[i]++;
		else if(str[i]=='z')
			str[i]='a'; 
	}
	
	for(i=0;str[i]!='@';i++)
		printf("%c",str[i]);
		
	return 0;
}
