#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

        int a,b,c;
        float d,x1,x2;

        printf("enter the first variable a :");
        scanf("\n %d",&a);
        printf("enter the secund variable b :");
        scanf("\n %d",&b);
        printf("enter the third variable c ;");
        scanf("\n %d",&c);

        printf("Equetion = %dx^2+%dx+%d",a,b,c);

        d=pow((b*b)-(4*a*c),0.5);

        if(d>0)
        {

                x1=(-b+d)/(2*a);
                printf("\n x1 = %f\n",x1);

                x2=(-b-d)/(2*a);
                printf("\n x2 = %f\n",x2);

        }
        else
        {
             printf("\n equetion is not solved");
        }
        return 0;   
  
}