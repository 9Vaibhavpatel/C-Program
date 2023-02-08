
#include<stdio.h>
#include<conio.h>
void main()
{       int i,j;
	clrscr();
	for(i=11;i<=55;i+=5)
	{
	for(j=1;j<=5;j++)
	{
	printf("%d ",i++);
	}
	printf("\n");
	}
	getch();
}