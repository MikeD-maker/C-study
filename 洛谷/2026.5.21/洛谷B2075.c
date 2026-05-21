#include<stdio.h>

int main()
{
	int a,b,i,fact=1,num[3];
	
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=b;i++)
		fact=fact*a%1000;//千万不能写成fact*=a%1000,两则意思完全不同 
	fact%=1000;
	for(i=0;i<3;i++)
	{
		num[i]=fact%10;
		fact/=10; 
	}
	
	printf("%d%d%d",num[2],num[1],num[0]);
	
	return 0;
}
