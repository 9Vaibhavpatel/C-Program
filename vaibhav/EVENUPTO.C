
#include<stdio.h>
#include<conio.h>
void main()                 //even up to n
{       int i,n;
	clrscr();
	printf("enter number");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
	printf("%d\t",i);
	}
	getch();
}