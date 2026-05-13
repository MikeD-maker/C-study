#include<stdio.h>

int main()
{
	int i,n,a[10],*p=a;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=n-1;i>=0;i--)
		printf("%d ",a[i]);
/*数组名偏移量法输入输出 
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=n-1;i>=0;i--)
		printf("%d ",*(a+i));
	指针偏移量法输入输出 
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=n-1;i>=0;i--)
		printf("%d ",*(p+i));
	指针下标法输入输出
	p=a; 
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=n-1;i>=0;i--)
		printf("%d ",p[i]);
	移动指针法输入输出
	p=a; 
	for(p=a;p<=a+n-1;p++)根据理解也可以是&a[n-1] 
		scanf("%d",p);
	for(p=a+n-1;p>=a;p--)
		printf("%d ",*p); 
*/
	return 0;
}
