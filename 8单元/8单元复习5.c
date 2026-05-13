#include<stdio.h>
#include<stdlib.h>
int *find_max(const int *p,const int *q); 

int main()
{
	int n,*p,*q,*max;
	
	scanf("%d",&n);
	q=(int*)malloc(n*sizeof(int));
	if(q==NULL)
	{
		printf("q内存分配失败"); 
		return 0;
	}
	p=q;
	for(;q<p+n;q++)//p指向首元素，循环后<p+n代表q指向的是p+n ，实际只有p+n-1个元素 
		scanf("%d",q);
	
	max=find_max(p,q);
	
	printf("%d",*max);
	
	free(p);
	
	return 0; 
}
int *find_max(const int *p,const int *q)
{
	int *max=p;
	
	for(;p<q;p++)//此时的q指向的是p+n，<q刚好可以遍历全部元素 
		if(*max<*p)
			max=p;
	return max;	
}
