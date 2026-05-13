#include<stdio.h>

int main()
{
	int l,h;
	float s; 
	
	scanf("%d%d",&l,&h);
	
	s=0.5*l*h;
	
	printf("%.3f",s);
	
	return 0;
}//一个浮点数不能给他定义成整数，否则错误 
