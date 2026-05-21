#include<stdio.h>

int main()
{
	long long num;
	
	scanf("%lld",&num);
	
	while(num!=1)
		if(num%2==0)
		{
			printf("%lld/2=%lld\n",num,num/2);
			num=num/2;
		}
		else
		{
			printf("%lld*3+1=%lld\n",num,num*3+1);
			num=num*3+1;
		}
	
	printf("End");
	
	return 0;
}
