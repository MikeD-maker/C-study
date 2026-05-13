#include<stdio.h>

int main()
{
	int i,candy[6]={0};
	
	for(i=1;i<=5;i++)
		scanf("%d",&candy[i]);
	
	for(i=1;i<=5;i++)
	{
		candy[0]+=candy[i]%3;//记录每个小孩一共吃了多少糖果 
		candy[i]=candy[i]/3;//对该小孩糖果进行更新 
		candy[(i-2+5)%5+1]+=candy[i];//对该小孩左边的人分糖果 
		candy[i%5+1]+=candy[i];//对该小孩右边的人进行分糖果 
	}
	
	for(i=1;i<=5;i++)
		printf("%d ",candy[i]);
	printf("\n%d",candy[0]);
	
	return 0;
}
