#include<stdio.h>

int main()
{
	int a[3][4]={1,3,5,7,9,11,13,15,17,1,21,23};
	int (*p)[4];
	int sum=0,i,j;
	
	p=a;
	for(i=0;i<3;i++,p++)
		for(j=0;j<4;j++)
			sum+=(*p)[j];
			
	printf("%d",sum);
	
	return 0;
}
