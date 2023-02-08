
#include<stdio.h>
#include<conio.h>
void main()
{       int i,j,s,sp=25;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=sp;s++)
		printf(" ");
		for(j=i;j<=5;j++)
		{
		printf("| ");
		}
		sp--;
		printf("\n");
	}
	for(i=-1;i<=4;i++)
	{
		for(s=1;s<=sp;s++)
		printf(" ");
		for(j=i;j<=4;j++)
		{
		printf("| ");
		}
		sp++;
		printf("\n");
	}
	getch();
}