#include<stdio.h>
typedef enum weekday{sun,mon,tus,wen,thu,fri,sat}WEEKDAY;
void printDay(WEEKDAY day);

int main()
{
	WEEKDAY day;
	
	scanf("%d",&day);
	
	printDay(day);
	
	return 0;
}
void printDay(WEEKDAY day)
{
	printf("%d",day);
}
