#include<stdio.h>
struct Book
{
	char name[30];
	char writer[20];
	float price;
	int year;
};

int main()
{
	struct Book book1={"C语言程序设计","谭浩强",39.5,2020 };
	
	printf("%s %s %f %d",book1.name,book1.writer,book1.price,book1.year);
	
	return 0;
}
