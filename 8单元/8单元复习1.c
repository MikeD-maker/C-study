#include<stdio.h>
#include<stdlib.h>
void sum_array(int *p,int*q);

int main()
{
	int n,*p,*q;
	
	scanf("%d",&n);//用户可能输入0！！ 
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("内存分配失败");//一定要写 
		return 0;
	}
	q=p;
	
	for(;q<p+n;q++)//注意一定是小于p+n，如果是p+n-1的话最后一个录不进去
		scanf("%d",q);
	sum_array(p,q);
	
	free(p);
	return 0; 
}
void sum_array(int *p,int*q)
{
	int sum=0;
	
	for(;p<q;p++)//因为main函数里面的q指向的是最后一个的后一个，此时小于q会把最后一个累加上去
		sum+=*p;
	
	printf("%d",sum); 
}
