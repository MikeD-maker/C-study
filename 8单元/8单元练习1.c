#include<stdio.h>
void month_day(int year,int year_day,int *pm,int *pd);

int main()
{
	int year,year_day,month,day;
	
	scanf("%d%d",&year,&year_day);
	
	month_day(year,year_day,&month,&day);
	
	printf("%d-%d-%d",year,month,day);
	
	return 0;
}
void month_day(int year,int year_day,int *pm,int *pd)
{
	int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
				  {0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int leap,i;
	
	leap=(year%400==0||(year%4==0&&year%100!=0));
	for(i=1;year_day>a[leap][i];i++)
		year_day-=a[leap][i];
	*pm=i;
	*pd=year_day;
}
