#include<stdio.h>

int main()
{
	char str[16];
	int i,k,count=0;
	
	scanf("%s %d",str,&k);
	
	for(i=0;str[i]!='\0';i++)
		switch(str[i])
			case '3':count++;
	
	if(count==k)
		printf("YES");
	else
		printf("NO");
		
	return 0;
}
