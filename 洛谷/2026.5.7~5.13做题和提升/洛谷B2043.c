#include<stdio.h>
#include<stdbool.h>

int main()
{
	int x;
	bool is_three,is_two,is_one;
	
	scanf("%d",&x);
	
	is_three=x%3==0&&x%5==0&&x%7==0;
	is_two=x%3==0&&x%5==0||x%3==0&&x%7==0||x%5==0&&x%7==0;
	is_one=x%3==0||x%5==0||x%7==0;
	if(is_three)
		printf("3 5 7");
	else if(is_two)
	{
		if(x%3==0&&x%5==0)
			printf("3 5");
		else if(x%3==0&&x%7==0)
			printf("3 7");
		else
			printf("5 7");
	}
	else if(is_one)
	{
		if(x%3==0)
			printf("3");
		else if(x%5==0)
			printf("5");
		else
			printf("7");
	}
	else
		printf("n");
	
	return 0;
}
