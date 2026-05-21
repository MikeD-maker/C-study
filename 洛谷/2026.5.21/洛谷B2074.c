#include<stdio.h>

int main()
{
	int fact=1;
	int a,b,i;
	
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=b;i++)
		fact=fact*a%7;
	
	switch(fact%7)
	{
		case 1:printf("Monday");break;
		case 2:printf("Tuesday");break;
		case 3:printf("Wednesday");break;
		case 4:printf("Thursday");break;
		case 5:printf("Friday");break;
		case 6:printf("Saturday");break;
		case 0:printf("Sunday");break;
	}
	
	return 0;
}
