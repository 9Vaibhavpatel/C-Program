
#include<stdio.h>
#include<conio.h>
void main()
{       int i,n,a=1;
	clrscr();
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d\t",i*a);
	a=a*2;
	}
	getch();
}