#include<stdio.h>
typedef struct student
{
	int ID;
	char name[10];
	float score;
}STUDENT;

int main()
{
	STUDENT stu[3];
	int i,max,index;
	
	for(i=0;i<3;i++)
		scanf("%d %s %f",&stu[i].ID,stu[i].name,stu[i].score);
		
	max=stu[0].score;
	index=0;
	for(i=1;i<3;i++)
		if(stu[i].score>max)
		{
			max=stu[i].score;
			index=i;
		}
		
	printf("%s",stu[index].name);
	
	return 0;
}
