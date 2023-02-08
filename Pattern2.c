#include<stdio.h>
void main()
{          int i=1,j,sp=12;
            while(i<=5)
           {
                 j=1;
                 while(j<=sp)
                 {
                  printf("");
                  j++;
                  }
                         j=i;
	      while(j<=5)
                         {
                          printf("* ");
                          j++;
	       }
               sp--;
               printf("\n");
               i++;
             }
}        