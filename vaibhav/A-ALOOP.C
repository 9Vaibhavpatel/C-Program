#include<stdio.h>
#include<conio.h>
void main()
{
	char i,n;

	clrscr();

	for(i=65;i<=90;i++)
	{
	n=i+32;
	printf("%c-%c\t",i,n);
	}
	getch();
}