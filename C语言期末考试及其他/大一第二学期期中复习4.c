#include<stdio.h>
#include<string.h>
int main()
{
	char str1[101],str2[101],str3[101],m[26],n[26];
	int i;
	
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	fgets(str3,sizeof(str3),stdin);
	
	str1[strlen(str1)-1]='\0';
	str2[strlen(str2)-1]='\0';
	str3[strlen(str3)-1]='\0';
	
	printf("%d %d %d",strlen(str1),strlen(str2),strlen(str3));
	
	
	for(i=0;i<26;i++)
	{
		m[i]=' ';
		n[i]=' ';
	}
	i=0;
	while(str2[i]!='\0')
	{
		if(m[str2[i]-'A']==' ')
			m[str2[i]-'A']=str1[i];
		else if(m[str2[i]-'A']!=str1[i])
		{
			printf("Failed");
			return  0;
		}
		i++;
	}
	for(i=0;i<26;i++)
		if(m[i]==' ')
		{
			printf("Failed");
			return 0;
		}
	for(i=0;i<26;i++)
	{
		if(n[m[i]-'A']==' ')
			n[m[i]-'A']=i+'A';
		else if(n[m[i]-'A']!=i+'A')
		{
			printf("Failed");
			return 0;
		}
		else
			continue;
	}
	i=0;
	while(str3[i]!='\0')
	{
		str3[i]=n[str3[i]-'A'];
		i++;
	}
	
	puts(str3);
	system("pause");
	return 0;
}
