#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,k,*p,*q;
	//开始进行录入信息操作 
	scanf("%d%d",&n,&k);
	k=k%n;//判断真正需要左移几次
	q=(int*)malloc((n+k)*sizeof(int));
	if(q==NULL)
	{
		printf("q内存分配失败");
		return 0; 
	}
	p=q;//把q指针保护起来 
	for(i=0;i<n;i++)
		scanf("%d",p+i);//对基本信息录入完毕
	//开始进行左移操作 
	if(k==0)
	{
		for(i=0;i<n;i++)
			printf("%d ",*(p+i));
		return 0;
	}//如果需要左移0次则直接输出，然后程序结束
	for(i=0;i<k;i++)
		*(p+n+i)=*(p+i);//把前k个数字移到后面
	//开始进行输出操作
	p=p+k;//更新p的位置，p+k刚好指的是左移后第一个新数字的位置
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	
	free(q);
	return 0; 
} 
