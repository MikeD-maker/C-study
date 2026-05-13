#include<stdio.h>

int main()
{
	int i,candy[6]={0},*p_candy=candy;
	
	for(i=1;i<=5;i++)
		scanf("%d",p_candy+i);
	
	for(i=1;i<=5;i++)
	{
		*p_candy+=*(p_candy+i)%3;//记录每个小孩一共吃了多少糖果 
		*(p_candy+i)=*(p_candy+i)/3;//对该小孩糖果进行更新 
		*(p_candy+(i-2+5)%5+1)+=*(p_candy+i);//对该小孩左边的人分糖果 
		*(p_candy+i%5+1)+=*(p_candy+i);//对该小孩右边的人进行分糖果 
	}
	
	for(i=1;i<=5;i++)
		printf("%d ",*(p_candy+i));
	printf("\n%d",*p_candy);
	
	return 0;
}
