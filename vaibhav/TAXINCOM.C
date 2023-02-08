#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,prt,prtg;
	clrscr();
       printf("ENTER AMT:");
       scanf("%d",&amt);
       if (amt<=2500)
       {
       prt=0;
       printf("SLAB 1:%d",prt);
       }
       else if(amt<=5000)
	 {
       prt=((amt-2500)*10)/100;
       printf("TOTAL AMOUNT of tax:%d",prt);
	}
      else if (amt<=10000)
       {
       prtg=((((amt-5000)/100)*20))+250;
       printf("tax:%d",prtg);
       }
       else if(amt>10000)
       {
       prt=((((amt-10000)/100)*30)+250+500);
       printf("total output:%d",prt);
       }
       getch();
}