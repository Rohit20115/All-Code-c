#include<stdio.h>
void main()
{

        int i,j,p=1;

        for(i=1;i<=5;i++)
        {

            for (j=1;j<=5;j++)
            {

                if(i==1&&j!=5||i==2&&(j!=2&&j!=3&&j!=4)||i==3&&(j!=5&&j!=4)||i==4&&j!=2&&j!=3&&j!=5||i==5&&j!=4&&j!=2&&j!=3)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            for(p=1;p<=5;p++)
            {
                printf(" ");
            }
            
            for (j=1;j<=6;j++)
            {

                if(i==2&&j!=1&&j!=3&&j!=4&&j!=6||i==3&&j!=2&&j!=3&&j!=4&&j!=5||i==4&&j!=1&&j!=3&&j!=4&&j!=6)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            
            for(p=1;p<=5;p++)
            {
                printf(" ");
            }
            
            for (j=1;j<=5;j++)
            {

                if(j==1||j==5||i==3)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            
            for(p=1;p<=5;p++)
            {
                printf(" ");
            }
            
            for (j=1;j<=5;j++)
            {

                if(i==1||j==3||i==5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            
            for(p=1;p<=5;p++)
            {
                printf(" ");
            }
            
            for (j=1;j<=5;j++)
            {

                if(i==1||j==3)
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
}
