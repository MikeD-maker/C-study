#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char *find(char s[]);

int main()
{
	char s1[100],s2[100],*p1,*p2;
	double num1,num2;
	
	gets(s1); 
	gets(s2);
	
	p1=find(s1);
	p2=find(s2);
	num1=atof(p1);
	num2=atof(p2);
	if(num1>num2)
		printf("1");
	else if(fabs(num1-num2)<1e-6)
		printf("0");
	else
		printf("-1");
		
	return 0;
}
char *find(char s[])
{
	char *p=s;
	
	for(;*(p+1)!='\0';p++)
		if(*p=='0'&&*(p+1)!='0')
			return p+1;
	return s;
}
