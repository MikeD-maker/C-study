#include<stdio.h>

int main()
{
	int num,n,a,b,c,sum=0;
	
	scanf("%d",&n);
	num=n;
	c=num%10;
	num/=10;
	b=num%10;
	num/=10;
	a=num%10;
	
	
	if(a<4)
	{
		sum=a*10+a*9;
	}
	else
		sum=100+10*(a-1)+9*(a-1);
	if(b<4)
		sum=sum+b;
	else
		sum=sum+10+(b-1);
	if(c>4)
		sum=sum+1;
	
	printf("%d",n-sum);
	
	return 0;
}
