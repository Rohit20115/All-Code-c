#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char c
	clrscr();
	printf("enter the first number ");
	scanf("% d", &a);
	printf("enter the user choice ");
	scanf(" %c",&n);
	printf("enter the second number ");
	scanf("%d",&b);
	switch(c)
	{
		case'+':
		printf("sum=%d",a+b);
		break;
		case'-':
		printf("sub=%d",a-b);
		break;
		case'*':
		printf("mul=%d",a*b);
		break;
		case'/':
		printf("div=%d",a/b);
		break;
		default:
		printf("user choise is wrong plz try again");
	}
	getch();
}
