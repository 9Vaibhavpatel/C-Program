#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	int n;
	clrscr();

	for(i=65;i<=90;i++)
	{
	n=n-32;
	printf("%c-%d\t",i,i);
	}
	getch();
}