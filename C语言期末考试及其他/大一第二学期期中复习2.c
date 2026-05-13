#include<stdio.h>
#include<string.h> 
int judge_winer(char *player1,char *player2);

int main()
{
	char player1[10],player2[10];
	int i,n,count1,count2,flag;//其中count1用来计数player1的次数，flag用来判断该轮谁赢谁输 
	
	count1=0;
	count2=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf(" %s %s",player1,player2);
		flag=judge_winer(player1,player2);
		if(flag==1)
			count1++;
		else if(flag==2)
			count2++;
	}
	
	if(count1>count2)
		printf("Player1");
	else if(count1<count2)
		printf("Player2");
	else
		printf("Tie");
	
	return 0;
}
int judge_winer(char *player1,char *player2)
{
	int win1,win2;
	
	win1=(strcmp(player1,"Rock")==0&&strcmp(player2,"Scissors")==0)||(strcmp(player1,"Scissors")==0&&strcmp(player2,"Paper")==0)||(strcmp(player1,"Paper")==0&&strcmp(player2,"Rock")==0);//代表1赢
	win2=(strcmp(player1,"Rock")==0&&strcmp(player2,"Paper")==0)||(strcmp(player1,"Scissors")==0&&strcmp(player2,"Rock")==0)||(strcmp(player1,"Paper")==0&&strcmp(player2,"Scissors")==0);//代表2赢 
	
	if(win1)
		return 1;
	else if(win2)
		return 2;
	else
		return 0;
}
