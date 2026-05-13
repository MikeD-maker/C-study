#include<stdio.h>

int main()
{
	int n,i,num,max;
	
	scanf("%d",&n);
	scanf("%d",&max);
	
	for(i=2;i<=n;i++)
	{
		scanf("%d",&num);
		if(num>max)
			max=num;
	}
	
	printf("%d",max);
	
	return 0;
}
