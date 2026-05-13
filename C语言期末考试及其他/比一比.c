#include<stdio.h>
#include<math.h>
int main()
{
	float str[6][2],max_len;
	int i,j,n,index;//i，j作为循环参数 ，index作为行数下标 n为多少行 
	
	scanf("%d",&n);//n为行数
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%f",&str[i][j]);
	
	index=0;
	max_len=fabs(str[0][0]-str[0][1]);//将第一行最为最大 
	
	for(i=1;i<n;i++)
		if(max_len<fabs(str[i][0]-str[i][1]))
		{
			max_len=fabs(str[i][0]-str[i][1]);
			index=i;
		}
	
	printf("%d %.4f",index+1,max_len);
	
	return 0;
}
