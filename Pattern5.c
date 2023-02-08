#include<stdio.h>
void main()
{          int i=5,j,sp=12;
            while(i>=1)
           {
                 j=1;
                 while(j<=sp)
                 {
                  printf(" ");
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
               i--;
             }
        i=-1;
        while(i<=4)
        {
                   j=1;
                   while(j<=sp)
                    {
                    printf(" ");
                    j++;
                    }
            j=i;
           while(j<=4)
           {
            printf("* ");
            j++;
            }
          sp++;
         printf("\n");
         i++;
         }
}