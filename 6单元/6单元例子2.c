#include<stdio.h>

int main()
{
	int i,n,flag=0,a[]={1,45,18,7,22,11,33,15,27,19};//1代表有，0代表没有 
	
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			printf("%d",i);
			flag=1;
		}
	}
	
	if(flag==0)
		printf("not found");
		
	return 0;
}
