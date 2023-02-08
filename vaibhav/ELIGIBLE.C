
#include<stdio.h>
#include<conio.h>
void main()
{       int person,age;
	clrscr();
      printf("ENTER AGE OF PERSON:");
      scanf("%d",&age);
     if (age>18)
     printf("PERSON IS ELIGIBLE FOR VOTING");
     else
     printf("PERSON IS NOT ELIGIBLE FOR VOTING");
     getch();
}