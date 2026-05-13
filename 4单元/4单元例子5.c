#include<stdio.h>

int main()
{
	int i;
	
	for(i=1;i<=100;i++)
		if(i%7==0)
			continue;
		else//此处可以不加else 
			printf("%d\n",i);
			
	return 0;
}
