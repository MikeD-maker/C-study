#include<stdio.h>

int main()
{
	char ch;
	int a;
	float b;
	double c;
	
	ch=getchar();
	scanf("%d\n%f\n%lf",&a,&b,&c);
	
	printf("%c %d %.6f %.6f",ch,a,b,c);
	
	return 0;
}
