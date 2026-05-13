#include<stdio.h>
void sort(int a[],int n,int m);

int main()
{
	int i,j,temp,n,m,a,musiclist[80]={0};
	
	scanf("%d%d%d",&n,&m,&a);//nma输入完成
	for(i=0;i<a;i++)//对每个人的每一行进行输入并且累加到每首歌的对应值上 
		for(j=1;j<=n;j++)
		{
			scanf("%d",&temp);
			musiclist[j]+=temp;
		}
	//输入处理完成
	sort(musiclist,n,m);
		
	return 0;
}
void sort(int a[],int n,int m)
{
	int i,j,index;
	for(i=1;i<=m;i++)//循环m轮
	{
		index=1; 
		for(j=2;j<=n;j++)
			if(a[j]>a[index])
				index=j;
		printf("%d ",index);
		a[index]=-1;
	} 
	
}
