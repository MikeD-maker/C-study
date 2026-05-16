#include<stdio.h>

int main()
{
	int i,k,num,sum_1,sum_5,sum_10;
	
	sum_1=sum_5=sum_10=0;
	
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&num);
		switch(num)
		{
			case 1:sum_1++;break;
			case 5:sum_5++;break;
			case 10:sum_10++;break;
			default:break;
		}
	}
	
	printf("%d\n%d\n%d\n",sum_1,sum_5,sum_10);
	
	return 0;	
} 
