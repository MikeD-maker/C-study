#include<stdio.h>
typedef struct monkey
{
	int ID;
	int flag;
}MK;//用每一个flag=1代表该猴子没有出局，flag=0代表该猴子已经出局，ID用来存储该猴子的序号 
void find(MK s[],int n,int m);

int main()
{
	MK s[100];
	int m,n,i;
	
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++)//1~n个猴子 
	{
		s[i].ID=i;//每个猴子id都赋值为i 
		s[i].flag=1;
	}//输入有几个猴子，和m，并且把所有猴子都置为1，不用0下标 
	find(s,n,m);
	
	return 0;
}
void find(MK s[],int n,int m)
{
	int current,count,remain,i;
	
	current=1;
	count=1;//特别提醒，这里是1，因为我要先判断这个猴子是不是第m个，所以第一个猴子就已经是1了 
	//如果置为0，在我下面的程序中则会在第m个猴子时count的值是m-1 
	remain=n;
	
	while(remain>1)
	{
		if(s[current].flag==1)//代表此处有猴子才能对后面进行操作 
		{
			if(count==m)//在此处有猴子的基础上判断此处是第m个 
			{
				s[current].flag=0;//第m个猴子删掉 
				count=1;//重新开始计数 ，也是从新的第一个猴子开始， 
				remain--;//删去一个猴子，直到最后一个 
			}
			else
				count++;
		}//没有猴子直接下一个 
		current=current%n+1;//更新下一个猴子 
	}
	for(i=1;i<n+1;i++)
		if(s[i].flag==1)
		{
			printf("大王是%d",i);
			return;
		}
}
