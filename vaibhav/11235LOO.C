#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1,b=0,c;
	clrscr();
	printf("enter:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
	getch();
}