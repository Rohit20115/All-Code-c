#include<stdio.h>
main()
{

        char city[5][15];
        int i;

        printf("\n enter the name of city ...\n");

        for(i=0;i<5;i++)
        {

                scanf("%s",city[i]);

        }

        printf("\n cities.....\n");

        for(i=0;i<5;i++)

        printf("\n %s",city[i]);

}