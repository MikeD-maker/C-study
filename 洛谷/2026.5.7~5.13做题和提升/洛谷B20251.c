#include<stdio.h>
#include<stdbool.h>

int main()
{
	int x,y;
	bool is_x,is_y,is_square;
	
	scanf("%d %d",&x,&y);
	
	is_x=x>=-1&&x<=1;
	is_y=y>=-1&&y<=1;
	is_square=is_x&&is_y;
	if(is_square)
		printf("yes");
	else
		printf("no");
	
	return 0;
}
