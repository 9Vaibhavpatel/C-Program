
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter abc:");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d largest number is",a>b?(a>c?a:c):(b>c?b:c));
	getch();
}