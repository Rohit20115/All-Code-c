#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	printf("Enter the number c : ");
	scanf("%d",&c);

	if((a>b&&a>c)||(c>a&&c>b))
	{  if(c>a&&c>b)
	     printf("C is max");

	    else
	    printf("A is max");

	}
	else
	{
	   printf("B is max");

	}




	getch();
}