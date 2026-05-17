#include<stdio.h>

int main()
{
	int n,i,num1,num2;//num1是临床数量，num2是有效数量 
	double arr[31];
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&num1,&num2);
		arr[i]=1.0*num2/num1;
	}
	
	for(i=2;i<=n;i++)
		if(arr[i]-(arr[1]+0.05)>1e-10)
			printf("better\n");
		else if(arr[i]+0.05-arr[1]<-1e-10)
			printf("worse\n");
		else
			printf("same\n");
		
	return 0;
}
