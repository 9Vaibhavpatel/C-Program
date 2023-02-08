
#include<stdio.h>
#include<conio.h>
void main()
{       int i,j,a=0;
	clrscr();
       for(i=5;i>=1;i--)
       {

	       for(j=5;j>=i;j--)
	      {
	       printf("%d ",j);
	       }
	       printf("\n");
       }
       getch();
}