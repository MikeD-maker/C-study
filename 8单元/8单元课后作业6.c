#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char *FindZero(char *end);
void reverse(char *first,char *temp_end);
int panduan(char str[]);

int main()
{
	int len,num,flag=0; //flag用来判断是不是整数 
	char str[100],*first,*end,*temp_end;
	while(flag==0)
	{
		gets(str);//判断是不是整数 
		flag=panduan(str); 
	}
	num=(int)atof(str);//此处完全可以用sscanf来判断，因为上面已经判断是不是整数了，用这个只是为了复习 
	if(num==0)//如果是0 
	{
		printf("该数的逆转数为:"); 
		puts(str);
		return 0;
	}
	else//不是0的整数 
	{
		len=strlen(str);
		if(*str=='-')//负数情况 
		{
			first=str+1;
			end=str+len-1;
			temp_end=FindZero(end);//从后往前找到非0位 
			reverse(first,temp_end);//逆置 
		} 
		else//正数情况 
		{
			first=str;
			end=str+len-1;
			temp_end=FindZero(end);//从后往前找到非0位 
			reverse(first,temp_end);//逆置 
		}
	}
	printf("该数的逆转数为:"); 
	puts(str);
	
	return 0;
}
char *FindZero(char *end)
{
	while(1)
	{
		if(*end!='0')
			return end;
		else
			end--;
	}
}
void reverse(char *first,char *temp_end)
{
	if(first==temp_end)
		return;
	char temp;
	for(;first<temp_end;first++,temp_end--)
	{
		temp=*first;
		*first=*temp_end;
		*temp_end=temp;
	}
}
int panduan(char str[])
{
    int i, start = (str[0] == '-') ? 1 : 0; // 跳过负号
    // 检查第一个数字是否为 '0' 且后面还有数字
    if (str[start] == '0' && str[start+1] != '\0')
    {
        printf("请输入一个整数");
        return 0;
    }
    // 检查所有字符是否都是数字（负号除外）
    for (i = start; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
        {
            printf("请输入一个整数");
            return 0;
        }
    }
    return 1;
}
/*int panduan(char str[])//此处也可用指针 
{
	int j,i,flag=0;
	
	if(str[0]=='-')
		j=i=1;//跳过-号 
	else
		j=i=0;
	for(;str[j+1]!='\0';j++)
		if(str[j]=='0'&&(str[j+1]>='0'&&str[j+1]<='9'))//代表有前导0，所以不是整数
		{
			printf("请输入一个整数");
			return 0;
		}
		
	for(;str[i]!='\0';i++)
		if(isdigit(str[i]))
			continue;
		else
			flag=1;//不是整数 
	if(flag==1)
	{
		printf("请输入一个整数");
		return 0; 
	}
	else
		return 1;
}*/

