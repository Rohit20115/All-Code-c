#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the secound number");
	scanf("%d",&b);
	printf("enter the third number");
	scanf("%d",&c);
	if(a>b  c>b)
	{
		if(c>a)
		printf("c is maximum");
		else
		printf("a is maximum");
	}
		else
	{
		printf("b is maximum");
	}
	getch();
}
