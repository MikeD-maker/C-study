#include<stdio.h>

int main()
{
	/*int i,n,sum,num;
	sum=0;
	
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&num);
		sum+=num;
	}
	
	printf("%d",sum);
	
	return 0;*/
	int i,n,num,sum;
	
	i=0;
	sum=0;
	
	while(scanf("%d",&num),i<=4)
	{
		sum+=num;
		i++;
	}
	
	printf("%d",sum);
	
	return 0;//需要先输入一个数才能再判断做不做循环 
}
