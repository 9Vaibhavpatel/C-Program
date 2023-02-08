#include<stdio.h>
#include<conio.h>
void main()
{       int x,y;
	clrscr();
	printf("ENTER X:\n");
	scanf("%d",&x);
	printf("enter y:\n");
	scanf("%d",&y);
	if (x<2000||x>3000)
	{
	printf("X value:%d",x);
	}
	else
	printf("No X");
	if(y>=100&&y<500)
	printf("\nY value:%d",y);
	else
	printf("no y");
	getch();
}