#include<stdio.h>
#include<conio.h>
#define MAX 30
int main()
{
        int size,i,arr[MAX];
        int *ptr;
        ptr=&arr[0];
        
        printf("\n enter the size of array : ");
        scanf("%d",&size);

        printf("\n enter %d integer into arry : ",size);

        for(i=0;i<size;i++)
        {

                scanf("%d",ptr);
                ptr++;

        }

        ptr = &arr[size-1];

        printf("\n elements of array in reverse order : ");

        for(i=size;i>=0;i--)
        {

                printf("\n elements%d is %d : ",i,*ptr);
                ptr--;

        }

        return 0;

}

