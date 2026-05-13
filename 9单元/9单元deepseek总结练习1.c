#include<stdio.h>
typedef struct Student
{
	int ID;
	char name[20];
	float score[3];
}STU;

int main()
{
	STU s={101,"ÕÅÈı",{85,90,88}};
	
	printf("ID:%d ĞÕÃû:%s %.1f %.1f %.1f",s.ID,s.name,s.score[0],s.score[1],s.score[2]);
	
	return 0;
}
