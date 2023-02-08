#include<stdio.h>
void main()
{          int i=1,j,sp=25;
            while(i<=5)
           {
                 j=1;
                 while(j<=sp)
                 {
                  printf(" ");
                  j++;
                  }
                         j=1;
	      while(j<=i)
                         {
                          printf("* ");
                          j++;
	       }
               sp++;
               printf("\n");
               i++;
             }
}        