
#include<stdio.h>
#include<conio.h>
char main()
{
	char a;
	clrscr();

	printf("Enter char:");
	scanf("%c",&a);
	if(a>=65 && a<=90)
		{
		a=a+32;
		printf("Capital char is:%c",a);
		}
	else if(a>=97 && a<=122)
		{
		a=a-32;
		printf("Small char is:%c",a);
		}
	getch();
}
