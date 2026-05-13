#include<stdio.h>
#include<ctype.h>
#include<string.h>
void toLower(char *s);
void search(char word[],char text[],int *const count,int *const first_pos); 

int main()
{
	int count=0,first_pos=-1;
	char text[100],word[100];
	
	gets(word);
	gets(text);//先录入内容
	
	toLower(word);
	toLower(text);//对所有内容进行小写转换
	search(word,text,&count,&first_pos);//开始查找操作
	
	if(count!=0)
		printf("%d %d",count,first_pos);//如果有单词则输出首位置和次数 
	else
		printf("-1");//没有则输出-1 
		
	return 0;
}
void toLower(char *s)
{
	for(;*s!='\0';s++)
		*s=tolower(*s);
}
void search(char word[],char text[],int *const count,int *const first_pos)
{
	int left,right,len_word=strlen(word);
	char *p=text;
	
	while((p=strstr(p,word))!=NULL)
	{
		left=p==text||!isalpha(*(p-1));//单词的所有左边界条件 ,必须先写p==text,不然会越界 
		right=*(p+len_word)=='\0'||!isalpha(*(p+len_word));//单词的所有右边界条件 
		
		if(left&&right)//左右边界都满足，说明是一个单词 
		{
			if(*first_pos==-1)
			{
				*first_pos=p-text;//把第一个下标存下来 
			}
			*count+=1;//单词数+1 
		}
		p+=len_word;
	}
}
/*void search(char word[], char text[], int *count, int *first_pos)
{
    int len_word = strlen(word);
    char *p = text;
    char *found;

    while ((found = strstr(p, word)) != NULL) {
        // 检查是否是独立单词
        int left_ok = (found == text) || !isalpha(*(found - 1));
        int right_ok = (*(found + len_word) == '\0') || !isalpha(*(found + len_word));
        if (left_ok && right_ok) {
            (*count)++;
            if (*first_pos == -1)
                *first_pos = found - text;
        }
        // 移动搜索起点，避免重复匹配（+1 是最安全，但 +len_word 也可，因为独立单词不会重叠）
        p = found + len_word;
        if (*p == '\0') break;
    }
}
void search(char word[],char text[],int *const count,int *const first_pos)
{
	int i,len_word=strlen(word),flag=0;
	char *p;//用来更新每次查找的位置 
	
	p=strstr(text+1,word);//先把第一个的位置跳过去 这样就不会造成数组溢出了，然后单独判断前面的那个 
	while(p!=NULL)
	{
		if((!isalpha(*(p-1)))&&(!isalpha(*(p+len_word))))
		{
			const int *q=p-text;//定义完成后不会再改变q的值，q的值就是下标 
			*count+=1;
			*first_pos=*q;
		}
		p=p+len_word;
		p=strstr(p,word);
	}
	for(i=0;text[i]!=' ';i++)
		if(text[i]==word[i])
			flag=1;
		else
		{
			flag=0;
			break;
		}	
	if(flag==1)
	{
		*first_pos=0;
		*count+=1;
	}
}

p=strstr(text+1,word);//跳过第一个单词的部分，留到后面进行处理 

while(p!=NULL)
{
	
	if(!isalpha(*(p-1))&&!isalpha(*(p+len_word)))//isalpha函数碰到\0返回值是0 
	{
		*count+=1;
		p=p+len_word;//跳过该单词的部分， 
	}
	else
		p=p+len_word;//没找到也跳过该单词的部分
	p=strstr(p,word);//在新的部分进行寻找word，直到其为空指针 不做循环 
}//以下部分开始寻找第一次出现的下标，并且判断第一个单词是否跟所需要查找的单词一致 
p=text;
p=strstr(text,word);
if(p==text&&!isalpha(*(p+len_word)))
{
	*first=0;
	*count+=1;
	return;
}
else
{
	p=p+len_word;
	while(*first==0&&*count!=0)
	{
		if(!isalpha(*(p-1))&&!isalpha(*(p+len_word)))
			*first=p-text;
		else
			p=p+len_word;
	}
}*/
