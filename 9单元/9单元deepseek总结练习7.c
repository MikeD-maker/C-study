#include<stdio.h>
#include<stdlib.h>
typedef struct book
{
	char name[50];
	float price;
}BOOK;
void sort(BOOK *p,int n);

int main()
{
	int n;
	BOOK *p,*q;
	
	scanf("%d",&n);
	p=(BOOK*)malloc(n*sizeof(BOOK));
	if(p==NULL)
	{
		printf("pƒ⁄¥Ê∑÷≈‰ ß∞‹");
		return 0; 
	}
	q=p;
	for(;q-p<n;q++)
		scanf("%s %f",q->name,&q->price);
	
	sort(p,n);
	
	for(q=p;q-p<n;q++)
		printf("%s %.0f",q->name,q->price);
	
	free(p); 
	
	return 0;
}
void sort(BOOK *p,int n)
{
	BOOK *q=p,temp;
	int i;
	
	for(i=0;i<n;i++)
		for(q=p;q-p<n-1-i;q++)
			if(q->price>(q+1)->price)
			{
				temp=*q;
				*q=*(q+1);
				*(q+1)=temp;
			}
}
