
#include<stdio.h>
#include<conio.h>
void main()
{       int marks;
	clrscr();
	   printf("ENTER MARKS:");
	    scanf("%d",&marks);
	    if (marks>=75)
	    {
	    printf("GRADE A");
	    }
	    else if(marks>=60&&marks<75)
	    printf("GRADE B");
	    else if(marks>=45&&marks<60)
	    printf("GRADE C");
	    else if(marks>=35&&marks<45)
	    printf("GRADE D");
	    else if (marks<35)
	    printf("FAIL");
	    getch();
}