#include<stdio.h>
typedef struct date
{
	int year;
	int num;
	int day;
	int month;
}DATE;
void month_day(int year,int num,int *pm,int *pd);

int main()
{
	DATE a;
	
	scanf("%d %d",&a.year,&a.num);
	
	month_day(a.year,a.num,&a.day,&a.month);
	
	printf("%d-%d-%d",a.year,a.month,a.day);
	
	return 0;
}
void month_day(int year,int num,int *pd,int *pm)
{
	int flag;
	int target[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	
	if(year%400==0||(year%4==0&&year%100!=0))
		flag=1;//代表闰年
	else
		flag=0;//代表平年
		
	for(*pm=1;*pm<=12;(*pm)++)
		if(num>target[flag][*pm])
			num-=target[flag][*pm];
		else
		{
			*pd=num;
			return;
		}
}
