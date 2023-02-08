#include<stdio.h>
void main()
{          int i=5,j,sp=12;
            while(i>=1)
           {
                 j=1;
                 while(j<=sp)
                 {
                  printf("  ");
                  j++;
                  }
                         j=i;
	      while(j>=1)
                         {
                          printf("* ");
                          j--;
	       }
               sp++;
               printf("\n");
               i--;
             }
}        