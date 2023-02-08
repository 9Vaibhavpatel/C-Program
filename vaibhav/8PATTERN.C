#include<stdio.h>
#include<conio.h>
void main()                //PAttern A to O
{       char i,j,a=97;
	clrscr();
       for(i=65;i<=69;i++)
       {
	       for(j=65;j<=i;j++)
	       {
		   if(j%2==1)
		   {
		   printf("%c ",a);
		   }
		   else
		   {
		   printf("%c ",a-32);
		   }
		   a++;
		}
	       printf("\n");
       }
       getch();
}