#include<stdio.h>
#include<conio.h>
void main()                //PAttern A to O
{       int i,j,a=1;
	clrscr();
       for(i=65;i<=69;i++)
       {
	       for(j=65;j<=i;j++)
	       {
		   if(a%2==1)
		   {
		   printf("1 ");
		   }
		   else
		   {
		   printf("0 ");
		   }
		   a++;
		}
	       printf("\n");
       }
       getch();
}