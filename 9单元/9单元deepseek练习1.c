#include<stdio.h>

typedef struct date
{
	int year;
	int month;
	int day;
}DATE;
typedef struct student
{
	int ID;
	char name[20];
	DATE birthday;
	float score[3];
}STUDENT;

int main()
{
	STUDENT stu1={1001,"уехЩ",{2005,6,15},85.5,90.0,88.5};
	
	printf("%s %d-%d-%d %.1f %.1f %.1f",stu1.name,stu1.birthday.year,stu1.birthday.month,stu1.birthday.day,stu1.score[0],stu1.score[1],stu1.score[2]);
	
	return 0;
}
