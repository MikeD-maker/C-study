#include<stdio.h>

int main()
{
	int *a[2];
	int x=10,y=20;
	int *p,*q;
	
	p=&x;
	q=&y;
	
	a[0]=p;
	a[1]=q;
	
	printf("%p %p\n",&x,&y);
	printf("%p %p",a[0],a[1]);
	
	return 0;
	
	
}//根据我的总结，以及ppt的内容帮我出题，强化我的记忆 
