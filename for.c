#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number n : ");
    scanf("%d",&n);
   
   for ( i=1;i<=14;i++)
   {
      for(j=1;j<=i;j++)
    { 
      if(j==1||i==14||i==j)
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