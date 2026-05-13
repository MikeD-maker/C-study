#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,j;
	char **a,*temp;
	char str[81];
	scanf("%d",&n);
	a=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		a[i]=(char*)malloc(sizeof(char)*(strlen(str)+1));
		strcpy(a[i],str);
	}
	
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
			if(strcmp(a[j],a[j+1])>0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	
	for(i=0;i<n;i++)
		puts(a[i]);
	
	for(i=0;i<n;i++)
		free(a[i]);
	free(a);
	
	return 0;
}
