
#include<stdio.h>
#include<conio.h>
int main()
{       float i,n,a=0.5;
	clrscr();
	printf("ENTER:");
	scanf("%f",&n);
	for(i=0.5;i<=n;i++)
	{
	a=a+i;
	printf("%.1f ",a);

	}
	getch();
}