#include<stdio.h>

int main()
{
	int i,n,num,zero,znum,fnum;
	
	zero=znum=fnum=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num); 
		if(num>0)
			znum++;
		else if(num==0)
			zero++;
		else
			fnum++;
	}
	
	printf("%d %d %d",fnum,zero,znum);
	
	return 0;
}
