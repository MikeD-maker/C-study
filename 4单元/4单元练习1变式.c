#include<stdio.h>
#include<limits.h>

int main()
{
	int i,num,max,n;
	
	max=INT_MIN;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(num>max)
			max=num;
	}
	
	printf("%d",max);
	
	return 0;
}
