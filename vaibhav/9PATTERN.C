#include<stdio.h>
#include<conio.h>
void main()                //PAttern A to O
{       char i,j,a=65;
	clrscr();
       for(i=65;i<=69;i++)
       {

	       for(j=65;j<=i;j++)
	      {
	       printf("%c ",a++);
	       }
	       printf("\n");
       }
       getch();
}