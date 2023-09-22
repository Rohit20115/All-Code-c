#include<stdio.h>
int main()
{

        int radius;
        float pi=3.14;
        float area;

        printf("enter the radius of circle : ");
        scanf("\n%d",&radius);

        area=pi*radius*radius;

        printf("area of a circle=%f",area);

        return 0;

}