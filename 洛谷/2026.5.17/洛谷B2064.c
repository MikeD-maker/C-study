#include<stdio.h>

int main()
{
	int n,a,i,arr[31]={0,1,1};
	
	scanf("%d",&n);
	int num[n];
	for(i=1;i<=n;i++)
		scanf("%d",&num[i]);
		
	for(i=3;i<=30;i++)
		arr[i]=arr[i-1]+arr[i-2];
	
	for(i=1;i<=n;i++)
		printf("%d\n",arr[num[i]]);
	
	return 0;
}
