#include<stdio.h>
int main()
{

        int *p;
        int quantity = 178;

        p=&quantity;

        printf("\n quantity = %d",quantity);
        printf("\n quantity = %d",*p);

        return 0;

}