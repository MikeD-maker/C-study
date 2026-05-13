#include<stdio.h>

int main()
{
	char ch;
	
	ch=getchar();
	
	if(ch%2==1)
		printf("YES");
	else
		printf("NO");
		
	return 0;
}
