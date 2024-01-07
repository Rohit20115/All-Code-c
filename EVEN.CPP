#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();

	printf("eter the number ");
	scanf("%d",&n);

	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	getch();
}