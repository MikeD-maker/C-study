#include<stdio.h>
#include<stdbool.h>

int main()
{
	int m,n,i,num,left,count=0;
	bool medince;
	
	scanf("%d%d",&m,&n);
	
	left=m;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		medince=num<=left;//如果小于则代表有存是1，否则没存为0
		switch(medince)
		{
			case 1:left-=num;break;
			case 0:count++;break;
		} 
	}
	
	printf("%d",count);
	
	return 0;
}
