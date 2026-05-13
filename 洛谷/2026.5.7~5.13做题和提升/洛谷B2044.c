#include<stdio.h>

int main()
{
	int score[3],i,count=0;
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&score[i]);
		if(score[i]<60)
			count++;
	}
	
	if(count==1)
		printf("1");
	else
		printf("0");
	
	return 0;
}
