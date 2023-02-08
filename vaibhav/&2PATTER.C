#include<stdio.h>
#include<conio.h>
void main()
{       int i,j,s,sp=12;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=sp;s++)
		printf("");
		for(j=i;j<=5;j++)
		{
		printf("& ");
		}
		sp--;
		printf("\n");
	}
	getch();
}