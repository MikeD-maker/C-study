#include<stdio.h>
typedef struct point
{
	int x;
	int y;
	int distance;
}POINT;
void sortPoints(POINT *p,int n); 

int main()
{
	POINT s[100];
	int n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&s[i].x,&s[i].y);
		s[i].distance=s[i].x*s[i].x+s[i].y*s[i].y;
		
	}
	
	sortPoints(s,n);
	
	for(i=0;i<n;i++)
		printf("(%d,%d) ",s[i].x,s[i].y);
	
	return 0;
}
void sortPoints(POINT *p,int n)
{
	int i;
	POINT temp,*q;
	
	for(i=0;i<n;i++)
		for(q=p;q-p<n-1-i;q++)
			if((q->distance)>((q+1)->distance))
			{
				temp=*q;
				*q=*(q+1);
				*(q+1)=temp;
			}
}
