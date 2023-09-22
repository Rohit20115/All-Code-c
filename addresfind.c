#include<stdio.h>
int main()
{


        int quantity = 179;
        int *p;

        p=&quantity;

        printf("\n quantity = %d",quantity);

        printf("\n quantity = %d",*p);

        printf("\n address of quantity = %u",&quantity);

        printf("\n address of quantity = %u",p);

        return 0;


}