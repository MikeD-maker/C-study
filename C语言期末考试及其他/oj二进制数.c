/*
初始化sum=0；fact=1, 
输入一个二进制字符串
将该字符串逆置
while(str[i]!='\0')
	如果是‘1’
		sum+=fact*1;//如果是0直接更新即可 
	fact*=2;对fact进行更新 //一总的更新

输出sum */
#include<stdio.h>
#include<string.h>

int main()
{
	char str[33],*p;
	int sum,fact;
	//开始初始化 
	sum=0;
	fact=1;//累加，权初始化完成
	//输入二进制字符串
	fgets(str,sizeof(str),stdin);//录入完成，并且会录入最后一个回车再有\0 
	//开始逆置 
	strrev(str);//逆置完成
	//开始转化成10进制数
	 p=str+1;
	 while(*p!='\0')
	 {
	 	if(*p=='1')
	 		sum+=fact*1;
	 	fact*=2;
	 	p++;//指向下一个数 
	}//转化完成
	//开始输出
	printf("%d",sum);
	
	return 0; 	 
}
