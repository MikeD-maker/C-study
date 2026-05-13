#include<stdio.h>
#include<stdlib.h>

int main()
{
	long a,b;
	
	scanf("%ld %ld",&a,&b);//long用ld输入输出 
	
	printf("%ld",abs(a+b));//abs函数在stdlib.h文件中 
	
	return 0;
}
