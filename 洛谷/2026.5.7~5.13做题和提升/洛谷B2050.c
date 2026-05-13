#include<stdio.h>
#include<stdbool.h> 
int main()
{
	int a,b,c;
	bool is_triangle;
	
	scanf("%d %d %d",&a,&b,&c);
	
	is_triangle=a+b>c&&a+c>b&&b+c>a;
	if(is_triangle)
		printf("1");
	else
		printf("0");
	
	return 0;
}
