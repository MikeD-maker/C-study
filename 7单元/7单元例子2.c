#include<stdio.h>
#include<string.h>

int main()
{
	char str[80],max[10]="";
	int n,i;
	scanf("%d",&n);
	getchar();
	
	for(i=1;i<=n;i++)
	{
		gets(str);
		if(strcmp(str,max)>0)
			strcpy(max,str);
	}
	
	puts(max);
	
	return 0;
}
