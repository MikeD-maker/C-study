#include<stdio.h>
void max_min(int a[],int n,int *pmax,int *pmin);

int main()
{
	int i,n,max,min,a[10];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	max_min(a,n,&max,&min);
	
	printf("%d %d",max,min);
	
	return 0;
}
void max_min(int a[],int n,int *pmax,int *pmin)
{
	int i,j,temp;
	
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
				temp=a[j],a[j]=a[j+1],a[j+1]=temp;
	//也可以用打擂台的方式只找最大值最小值，用上述排序是为了复习大数下沉的排序方法			
	*pmax=a[n-1];
	*pmin=a[0];
}
