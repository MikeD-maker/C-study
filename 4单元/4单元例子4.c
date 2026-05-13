#include<stdio.h>

int main()
{
	int max,score;
	
	max=0;
	
	while(scanf("%d",&score),score>=0)
		if(score>max)
			max=score;
			
	printf("%d",max);
	
	return 0;
}
