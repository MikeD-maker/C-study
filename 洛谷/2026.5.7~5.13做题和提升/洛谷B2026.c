/*#include<stdio.h>

int main()
{
	double a,b;
	
	scanf("%lf %lf",&a,&b);
	
	printf("%f",(a/b-(int)(a/b))*b);
	
	return 0;
}*/
#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c;
	
	scanf("%lf %lf",&a,&b);
	
	c=fmod(a,b);//等价于浮点数版的a%b
	
	printf("%f",c);
	
	return 0;
}
