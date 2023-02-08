#include<stdio.h>
void main()
{           int i=65,j,a=97;
            do  
            {
                  j=65;
	do{
                             
                              if(j%2==1)
	            {
                              printf("%c ",a);
	            }
                       else
                       {
	     printf("%c ",a-32);
	     }
                       a++;	
 	     j++; 
                      }while(j<=i);
            printf("\n");
            i++;
            }while(i<=69); 
 
}          