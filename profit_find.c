#include<stdio.h>
main()
{
 	    int cpr,spr,pr;

  	    printf("Enter the cost price ");
 	    scanf("%d",&cpr);
  	    printf("Enter the selling price");
  	    scanf("%d",&spr);

        if( cpr<spr)              
        {
            pr=spr-cpr;
            printf("this trasction is profit=%d",pr);
        }
 	    else 
        if( cpr>spr)       
        {
 		    pr=cpr-spr;
 		    printf("this traction is loss = %d",pr);
        }
        else                   
            printf("there is no loss no profit" );
 
 }


