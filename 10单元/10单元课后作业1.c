#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a,*max,i,j,n;
	
	scanf("%d",&n);
	a=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
		*(a+i)=(int*)malloc(n*sizeof(int));//对该二维数组分配内存
		
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",*(a+i)+j);//把数据存入到a[i][j]中；
	
	max=*a+0;//把max指向a[0][0]
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(*(*(a+i)+j)>*max)//*(a+i)+j是a[i][j]的地址，再加一个*才是a[i][j]的值 
				max=*(a+i)+j;//进行比较操作，只保存最大的地址 
	
	printf("最大值是%d",*max);
	
	for(i=0;i<n;i++)
		free(*(a+i));	
	free(a);//释放内存 
	
	return 0; 
}
