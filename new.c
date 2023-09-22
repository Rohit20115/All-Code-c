#include<stdio.h>
int main()
{

    int i,j;

    for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(i==j-3||j==4||i!=2&&j!=2)
               {
               printf("*");
               }
               else
               {
               printf(" ");
               }
            }
            printf("\n");
        }

    return 0;
}