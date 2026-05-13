#include<stdio.h>

int main()
{
	int a[2]={1,2},x,y,z,*p;
	p=a;
	x=(*p)++;//x=1,a[0]=2
	y=++(*p);//y=3,a[0]=3
	z=*++p;//z=a[1]=2,p=a+1
	printf("%d %d %d %d",x,y,z,p-a);
	return 0;
}
