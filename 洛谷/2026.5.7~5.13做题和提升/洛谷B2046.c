#include<stdio.h>

int main()
{
	int distance;
	
	scanf("%d",&distance);
	
	if(distance<100)
		printf("Walk");
	else if(distance>100)
		printf("Bike");
	else
		printf("All");
	
	return 0;
}
