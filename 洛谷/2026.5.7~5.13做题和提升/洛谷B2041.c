#include<stdio.h>
#include<stdbool.h>

int main()
{
	int lucky,courage;
	bool is_award;
	
	scanf("%d %d",&lucky,&courage);
	
	is_award=lucky>=10||courage>=20;
	if(is_award)
		printf("1");
	else
		printf("0");
		
	return 0;
	
}
