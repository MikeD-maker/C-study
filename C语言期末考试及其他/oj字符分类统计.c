#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[80];
	int i,letter,digit,other;
	
	i=letter=digit=other=0;
	
	while(str[i]=getchar(),str[i]!='\n')
		i++;
	
	for(i=0;str[i]!='\n';i++)
		if(isalpha(str[i]))
			letter++;
		else if(isdigit(str[i]))
			digit++;
		else
			other++;
			
	printf("letter:%d\ndigit:%d\nother:%d\n",letter,digit,other);
	
	return 0;
}
