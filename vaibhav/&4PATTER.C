#include<stdio.h>
#include<conio.h>
void main()
{       int i,j,s,sp=25;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=sp;s++)
		 printf("  ");
		for(j=i;j>=1;j--)
		{
		printf("& ");
		}
		sp++;
		printf("\n");
	}
	getch();
}