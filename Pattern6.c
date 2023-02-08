#include<stdio.h>
void main()
{          int i=1,j,sp=12;
            while(i<=5)
           {
                     j=1;
	     while(j<=5)
                       {
                          if(i==1 || i==5 || j==1 ||j==5)
                          {
                          printf("* ");
	       }
                          else
                          {
                           printf("  ");
                          }
                       j++;
                        }
               printf("\n");
               i++;
             }
       
}