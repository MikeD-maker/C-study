#include<stdio.h>

int main()
{
	char str[81];
	int i,counter=0;
	
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
		if(str[i]==' '&&str[i+1]!=' ')
			counter++;
	if(str[0]!=' ')
		counter++;
	printf("%d",counter+1);
}
