#include<stdio.h>

int main()
{
	int i,n,flag=1;//1是素数，0不是素数
	
	scanf("%d",&n);
	
	if(n<=1)
		flag=0;
	else
		for(i=2;i<n;i++)
			if(n%i==0)
			{
				flag=0;
				break;
			}
	if(flag==1)
		printf("yes");
	else
		printf("no");
		
	return 0; 
	
	
}
