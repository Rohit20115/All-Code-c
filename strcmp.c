#include<stdio.h>
#include<string.h>
main()
{

        char s1[10]="BAT";
        char s2[10]="CAT";
        int n;

        n=strcmp(s1,s2);

        if(n==0)
        {

                printf("\n stringboth are equal");


        }

        else
        if(n>0)
        {

            printf("\n string1 is greater");

        }

        else
        {

            printf("string2 is greater");

        }

        return 0;

}
