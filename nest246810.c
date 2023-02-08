#include<stdio.h>
void main()
{           int i,j;
             
                  i=2;
	do{
                           j=1;
	         do
                           {
	              printf("%d ",i);
	              j++; 
	          }while(j<=5);

	       printf("\n");
	       i+=2;
	     }while(i<=10);
}          