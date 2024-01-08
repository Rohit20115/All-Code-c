#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();

	printf("eter the number ");
	scanf("%d",&n);

	for(i=1;i<=n;i+=2)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);

	getch();
}