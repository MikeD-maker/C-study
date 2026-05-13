#include<stdio.h>
#include<string.h>
#include<ctype.h>
void display(int p1,int p2,int p3,char *p);

int main()
{
	char str[101],*p,*q;//p用来寻找'-' 
	int p1,p2,p3,is_display;//p1，1代表小写，2代表大写，3代表补充*号
	//p2的值代表这期间的每个字符补充多少个
	//p3，1代表顺序，2代表逆序，备注：p1=3时特别处理
	scanf("%d %d %d",&p1,&p2,&p3);
	getchar();
	gets(str);
	
	p=strchr(str,'-');
	q=str;
	if(p==NULL)
		puts(str);
	else
		while(p!=NULL)
		{
			if(p==str)
				printf("%c%c",*p,*(p+1));
			else
				for(;q<p-1;q++)
					printf("%c",*q);
			is_display=(p>str&&*(p+1)!='\0')&&(isdigit(*(p-1))&&isdigit(*(p+1))||isalpha(*(p-1))&&isalpha(*(p+1)))&&(*(p+1)>*(p-1));//所有满足最理想状态的条件
			if(is_display) 
				if(*(p-1)+1==*(p+1))
					printf("%c%c",*(p-1),*(p+1));
				else
					display(p1,p2,p3,p);
			else
				if(*(p+1)=='\0')
					printf("%c%c",*(p-1),*p);
				else
					printf("%c%c%c",*(p-1),*p,*(p+1));
			q=p+2; 
			p=strchr(p+1,'-'); 
		}
	for(;q<str+strlen(str);q++)
		printf("%c",*q);
	return 0;
}
void display(int p1,int p2,int p3,char *p)
{
	char *start,*end;
	char str1[1000];
	int i,count,index=0;
	
	start=p-1;
	end=p+1;
	printf("%c",*start);
	if(p1==3)//代表为*
	{
		for(i=1;i<=p2*(end-start);i++)
		{
			count=0;
			while(count<p2)
			{
				str1[index]='*';
				count++,index++;
			}
		}
	}
	else if(isalpha(*start))
		for(i=1;i<=p2*(end-start);i++)//字母 
		{
			count=0;
			while(count<p2)
			{
				if(p1==1)
					str1[index]=tolower(*start+i);
				else
					str1[index]=toupper(*start+i);
				count++,index++;
			}
		}
	else//数字 
		for(i=1;i<=p2*(end-start);i++)
		{
			count=0;
			while(count<p2)
			{
				str1[index]=*start+i;
				count++,index++;
			}
		}
	str1[index]='\0';//最后处理下来index指向的位置没有东西，加上\0变成字符串 
	if(p3==2)
		strrev(str1);
	printf("%s%c",str1,*end);
}
