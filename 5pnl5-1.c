#include<stdio.h>
void main()
{           int i=5,j,a=1;
            do  
            {
                  j=5;
	do{
                       printf("%d ",j);
 	     j--; 
                      }while(j>=i);
            printf("\n");
            i--;
            }while(i>=1); 
 
}          