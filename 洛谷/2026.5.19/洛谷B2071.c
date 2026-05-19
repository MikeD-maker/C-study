#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a,b,c,i=2,num;
	bool is_x=0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	while(is_x==0)
	{
		num=a%i;
		is_x=b%i==num&&c%i==num;
		i++;
	}
	
	printf("%d",i-1);
	
	return 0;
}
