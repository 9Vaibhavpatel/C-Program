#include<stdio.h>
void main()
{           int i,j,a=1;
             
                  i=1;
	do{
                           j=1;
	         do
                           {
	              printf("%d ",i);
	              j++; 
	          }while(j<=i);

	       printf("\n");
	       i++;
	     }while(i<=5);
}          