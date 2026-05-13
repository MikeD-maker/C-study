#include<stdio.h>
typedef struct date
{
	int year;
	int month;
	int day;
}DATE;
typedef union id
{
	long xuehao;
	char ch[18];
}ID;
typedef struct person
{
	char name[20];
	DATE birthday;
	ID a;
	int id_type;
}PERSON;

int main()
{
	PERSON s;
	
	scanf("%d",&s.id_type);
	scanf("%s %d %d %d",&s.name,&s.birthday.year,&s.birthday.month,&s.birthday.day);
	if(s.id_type==1)
		scanf("%s",s.a.ch);
	else
		scanf("%ld",&s.a.xuehao);
		
	if(s.id_type==1)
		printf("%s",s.a.ch);
	else
		printf("%ld",s.a.xuehao);
		
	return 0;
}
