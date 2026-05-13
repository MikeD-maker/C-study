#include<stdio.h>

int main()
{
	int n,i,max,num;
	
	scanf("%d",&n);
	scanf("%d",&max);
	
	for(i=1;i<n;i++)
	{
		scanf("%d",&num);
		if(num>max)
			max=num;
	}
	
	printf("%d",max);
	
	return 0;
}
