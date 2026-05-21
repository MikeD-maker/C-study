#include<stdio.h>
#include<stdbool.h>

int main()
{
	int n,i,num1,num2,sum=0;
	bool is_seven; 
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		num1=i%10;
		num2=i/10%10;
		is_seven=i%7==0||num1==7||num2==7;
		if(!is_seven)
			sum+=i*i;
	}
	
	printf("%d",sum);
	
	return 0;
}
