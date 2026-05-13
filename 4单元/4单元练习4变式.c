#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,k,flag=1;//1是素数，0不是素数 
	
	scanf("%d",&n);
	
	if(n<=1)
		flag=0;
	else
	{
		k=(int)sqrt(n);//sqrt（所有math.h中的函数）函数要的参数是double类型的，int类型会隐式转换，不过没关系，int转成double不影响精确度，返回值本身也要求的是double类型，我们要的就是开根号后的整数，所以不影响程序 
		for(i=2;i<=k;i++)
			if(n%i==0)
				{
					flag=0;
					break;
				}
	}
	
	if(flag==1)
		printf("yes");
	else
		printf("no");
		
	return 0;
	
}
