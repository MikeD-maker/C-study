#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};

int main()
{
	struct Node *p,stu;
	
	p=(struct Node*)malloc(sizeof(struct Node));
	if(p!=NULL)
	{
		p->data=100;
		p->next=NULL;
	}
	
	free(p);
	
	return 0;
}
