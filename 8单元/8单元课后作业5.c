#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,*pn,*q,*pd,d,i;
	
	scanf("%d",&n);
	pn=(int*)malloc(n*sizeof(int));
	if(pn==NULL)
	{
		printf("pn内存分配失败");
		return 0; 
	}
	else
	{
		q=pn;
		for(i=0;i<n;i++)
			scanf("%d",pn+i);//给n个数分配内存并且进行赋值，把q指向首元素方便下面操作 
	}
	scanf("%d",&k);
	d=k%n;//每n次相当于不进行左移，所以取d代表真正需要左移的次数 
	if(d==0)
		goto Put;//不需要进行转换，直接输出 
	else
	{
		pd=(int*)malloc(d*sizeof(int)); //分配一个临时内存用来保存需要左移的d个数 
		if(pd==NULL)
		{
			printf("pd内存分配失败");
			return 0;
		}
		else
		{
			for(i=0;i<d;i++,q++)
				*(pd+i)=*q;//把需要移动的数放在一个临时内存里，结束后q所指向的正好是第一个不需要移动的数 
			for(i=0;i<n-d;i++)
				*(pn+i)=*(q+i);//把后面所有的数前移
			q=pn+n-d;//q指向最后d个数的第一个数
			for(i=0;i<d;i++)
				*(q+i)=*(pd+i);//把临时内存中的数返回到新的位置，操作结束 
			free(pd);
		}
	} 
	
	Put:for(i=0;i<n;i++)
		printf("%d ",*(pn+i));
	free(pn);
	return 0;
	
}
