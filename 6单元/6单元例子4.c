#include<stdio.h>

int main()
{
	int i,j,n,min,temp;
	scanf("%d",&n);
	int a[n];
	
	scanf("%d",&a[0]);
	min=a[0];
	j=0;
	
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		{
			min=a[i];
			j=i;
		}
	}
	if(j==0)
		goto Printf;
	else
		temp=a[j],a[j]=a[0],a[0]=temp;
	
	Printf:for(i=0;i<n;i++)
		   		printf("%d ",a[i]);
		
	return 0;
}
