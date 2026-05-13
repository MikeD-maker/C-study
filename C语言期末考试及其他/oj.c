#include<stdio.h>

int main()
{
	int i,n,num,sum=0,tempN,temp1=2,temp2=10;//n表示要输入进来的数字，num用来代表每一位数字，sum用来表示多加的公里数 ,tempN用来保留n,temp用来表示循环中对其的更新 
	char str[4];
	scanf("%d",&n);
	if(n<=1||n>=1000)
	{
		printf("请输入一个大于1且小于1000的数"); 
		return 0; 
	}
	sprintf(str,"%d",n);
	for(i=0;str[i]!='\0';) 
	{
		if(str[i]=='4')
		{
			printf("请确保该数字没有数字4");
			return 0; 
		}
		i++;
	}
	tempN=n;
	
	num=tempN%10;
	tempN/=10;
	if(num>4)
		sum+=1;
	while(tempN!=0)
	{
		num=tempN%10;
		if(num<4)
			sum+=(temp1-1)*num;
		else
			sum+=temp2+(temp1-1)*(num-1);
		tempN/=10;
		temp1*=10;
		temp2*=10;
	}
	
	printf("%d",n-sum);
	
	return 0;
}
