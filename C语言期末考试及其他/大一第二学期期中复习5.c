#include<stdio.h>
#include<ctype.h>
#include<string.h>
void to_lower(char *p);
int find(char *str1,char *str2,char **p);

int main()
{
	char str1[100],str2[100],*p;
	int count;
	
	p=NULL;
	gets(str1);//1是字母 
	gets(str2);//2是给定字符串
	
	to_lower(str1);
	to_lower(str2);
	
	count=find(str1,str2,&p); 
	
	if(count==0)
		printf("-1");
	else
		printf("%d %d",count,p-str2);
		
	return 0;
}
void to_lower(char *p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
	    *(p+i)=tolower(*(p+i));
		i++;
	}
}
int find(char *str1,char *str2,char **p)
{
	char *q;
	int is_word,count=0;
	
	q=strstr(str2,str1);
	if(q==NULL)
		return 0;
	else
		while(q!=NULL)
		{
			is_word=(q-str2==0||*(q-1)==' ')&&(*(q+strlen(str1))==' '||*(q+strlen(str1))=='\0');
			if(is_word)
			{
				if(*p==NULL)
					*p=q;
				count++;
			}
			q=strstr(q+strlen(str1),str1);
		}
	return count;
}
