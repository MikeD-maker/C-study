#include<stdio.h>
int sumMatrix(int (*p)[4],int n);

int main()
{
	int sum,a[3][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11}};
	
	sum=sumMatrix(a,3);//因为形参是一个行指针，所以要传行指针
	
	printf("%d",sum);
	
	return 0; 
}
int sumMatrix(int (*p)[4],int n)
{
	int i,j,sum=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
			sum+=(*p)[j];
		p++;
	}
	
	return sum;
}
