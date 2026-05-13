#include<stdio.h>

int main()
{
	char ch;
	int i,a[27]={0};
	
	while(ch=getchar(),ch!='\n')
	{
		if(ch>='A'&&ch<='Z')
			a[ch-'A'+1]++;
		else if(ch>='a'&&ch<='z')
			a[ch-'a'+1]++;
	}
	for(i=1;i<27;i++)
		printf("count of %c is %d\n",64+i,a[i]);
	
	return 0;
}
