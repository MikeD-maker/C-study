#include<stdio.h>
#include<string.h>
#include<ctype.h>
int panDuan_type(char *p,char *q); //用来确保两个大整数是一正一负，两正，还是两负 
char *findzero(char *p); //用来寻找前导0 
void handlejiajia(char s1[],char s2[]);//处理两正 
void handlejianjian(char s1[],char s2[]);//处理两负 
void handlejiajian(char *p,char *q);//处理一正一负 
int PDzhengshu(char *p);//判断输入是不是整数 

int main()
{
	char str1[100],str2[100];
	int flag=0;//flag最初用来判断是不是整数，然后用来判断两个数是什么类型的整数（正负）
	while(flag!=2) 
	{	
		flag=0;//每次重新输入时需要将其重新置为0 
		gets(str1);
		gets(str2);
		flag+=PDzhengshu(str1);
		flag+=PDzhengshu(str2);
		if(flag!=2)
			printf("请输入两个正确的整数\n"); 
	}//确保输入的两个数都是整数 
	
	flag=panDuan_type(str1,str2);//判断是++型--型+-or-+型
	switch(flag)
	{
		case 1:handlejiajia(str1,str2);break;
		case -1:handlejianjian(str1,str2);break;
		case 0:handlejiajian(str1,str2);break;//1代表两个正数，-1代表两个负数，0代表一正一负 
	}
	
	return 0;
}
int panDuan_type(char *p,char *q)
{
	if(isdigit(*p)&&isdigit(*q))
		return 1;//代表++型
	else if(isdigit(*p)&&*q=='-')
		return 0;//代表+-型
	else if(*p=='-'&&isdigit(*q))
		return 0;//代表-+型
	else
		return -1;//代表--型 
}
char *findzero(char *p)
{
	for(;*(p+1)!='\0';p++)
		if(*p!='0')
			return p;
	return p;
}
void handlejiajia(char s1[],char s2[])//现在肯定是整数 
{
	char *p,*q;
	int flag;
	p=findzero(s1);
	q=findzero(s2);//去除前导0 ,如果只有一个整数0则不去除，且该指针指向这个0 
	if(strlen(p)>strlen(q))
		printf("1");//前者长度大于后者，则代表前者大 
	else if(strlen(p)<strlen(q))
		printf("-1");//前者长度小于后者，则代表后者大
	else if(strcmp(p,q)>0)//两者长度相同，开始比较 
		printf("1"); 
	else if(strcmp(p,q)==0)
		printf("0");
	else
		printf("-1");
	return;
}
void handlejianjian(char s1[],char s2[])
{
	char *p,*q;
	
	p=findzero(s1+1);
	q=findzero(s2+1);//去除前导0 
	if(strlen(p)>strlen(q))
		printf("-1");//前者长度大于后者，则代表后者大 因为是负数 
	else if(strlen(p)<strlen(q))
		printf("1");//前者长度小于后者，则代表前者大因为是负数 
	else if(strcmp(p,q)>0)//两者长度相同，开始比较 
		printf("-1"); 
	else if(strcmp(p,q)==0)
		printf("0");
	else
		printf("1");
	return;
}
void handlejiajian(char *p,char *q)
{
	int num1,num2;
	
	sscanf(p,"%d",&num1);
	sscanf(q,"%d",&num2);
	if(num1==0&&num2==0)
	{
		printf("0");
		return;
	}
	if(isdigit(*p)&&*q=='-')
		printf("1");
	else
		printf("-1");
	return;
}
int PDzhengshu(char *p)
{
	int i;
	
	if(*p=='-')
		i=1;//跳过-号 
	else
		i=0;
		
	for(;p[i]!='\0';i++)
		if(!isdigit(p[i]))
			return 0;
	if(*p=='-'&&i==1)
		return 0;
	else
		return 1;
} 
