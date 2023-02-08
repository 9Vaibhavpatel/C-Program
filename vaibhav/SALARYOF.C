#include<stdio.h>
#include<conio.h>
void main()
{
 int salary,HRA,DA,total;
 clrscr();
		   printf("ENTER SALARY:");
		   scanf("%d",&salary);
		   if(salary<5000)
		   {
		   total=(((salary*8)/100)+((salary*20)/100));
		  printf("total:%d",total);
		       }
		   else
		   {
		   printf("0");
		   }
		 getch();
}