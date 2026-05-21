#include<stdio.h>
#include<string.h>

int main()
{
	int L,R,i,j,count=0;
	char str[5];
	
	scanf("%d%d",&L,&R);
	
	for(i=L;i<=R;i++)
	{
		sprintf(str,"%d",i);
		str[4]='\0';
		for(j=0;str[j]!='\0';j++)
			switch(str[j])
				case '2':count++;
	}
	
	printf("%d",count);
	
	return 0;
}
