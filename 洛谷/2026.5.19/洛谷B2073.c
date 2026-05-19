/*#include<stdio.h>
#include<string.h>

int main()
{
	int a,b,n,i;
	char num[10002],*p;
	
	scanf("%d %d %d",&a,&b,&n);
	
	sprintf(num,"%f",1.0*a/b);
	p=strchr(num,'.');
	
	printf("%c",*(p+n));
	
	return 0;//没考虑精度的问题，导致此题错误 
}*/
#include<stdio.h>

int main()
{
	int a,b,n,digit,i,r;
	
	scanf("%d %d %d",&a,&b,&n);
	
	r=a%b*10;
	for(i=1;i<=n;i++)
	{
		digit=r/b;
		r=r%b*10;
	}
	
	printf("%d",digit);
	
	return 0;
}
