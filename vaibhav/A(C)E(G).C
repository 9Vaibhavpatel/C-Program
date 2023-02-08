
#include<stdio.h>
#include<conio.h>
void main()
{       char i=0,n=0;
	clrscr();
	for(i=65;i<=90;i+=2)
	{
	if(i%4==1)
	{
	printf("%c\t",i);
	}
	else
	{
	printf("%c\t",i+32);
	}
	}
	getch();
}