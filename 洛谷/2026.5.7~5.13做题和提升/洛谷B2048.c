#include<stdio.h>

int main()
{
	int x,money;
	char ch;
	
	scanf("%d %c",&x,&ch);
	
	if(x<=1000)
		money=8;
	else
		money=8+((x-1000+500-1)/500)*4;
	
	if(ch=='y')
		printf("%d",money+5);
	else
		printf("%d",money);
	
	return 0;
}
