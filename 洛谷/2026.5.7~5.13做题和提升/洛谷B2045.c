#include<stdio.h>

int main()
{
	int day;
	
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
		case 3:
		case 5:printf("NO");break;
		default:printf("YES");break;
	}
	
	return 0;
}
