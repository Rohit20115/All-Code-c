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

