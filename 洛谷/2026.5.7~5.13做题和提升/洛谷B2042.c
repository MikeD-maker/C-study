#include<stdio.h>

int main()
{
	int n;
	_Bool is_digit;
	
	scanf("%d",&n);
	
	is_digit=n%3==0&&n%5==0;
	if(is_digit)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}
