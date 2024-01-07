Q1:Write a C program to input two number and perform all arithmetic operations.

/*Arithmetic operations*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mul,div,mod;
	clrscr();

	printf("enter the first number  ");
	scanf("%d",&a);
	printf("enter the secound number  ");
	scanf("%d",&b);

	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;

	printf("addition=%d\n",add);
	printf("substraction=%d\n",sub);
	printf("multiplicatin=%d\n",mul);
	printf("divition=%d\n",div);
	printf("modulus=%d\n",mod);

	getch();
}
output
 







Q2:Write a program to check whether a given character is upper case,lower case,number of special character.

/*Check wheter a given character*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	clrscr();

	printf("enter the any character ");
	scanf("%c",&n);

	if(n>='A' && n<='Z')
	{
	printf("character is upper case");
	}
	else
	if(n>='a' &&n<='z')
	{
	printf("character is lower case");
	}
	else
	printf("special character");

	getch();
}

output





Q3:Write a C program to find whether a given number is positive or negative
























Q4:











