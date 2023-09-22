#include<stdio.h>
int main()
{

        char city[5][15]={"Goa","pune","Satna","Rewa","prayagraj"};
        int i;

        printf("\n list of cities.....\n");

        for(i=0;i<5;i++)
        {

            printf("\n %s",city[i]);

        }
        return 0;

}
