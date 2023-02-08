#include<stdio.h>
#include<conio.h>
void main()
{
	float u,b,s;
	clrscr();
	printf("enter units:");
	scanf("%f",&u);

	 if(u<=100)
	 {	b=(u*0.6)+50;
		printf("total amount is:%.2f",b);
	 }
	 else if(u>100 && u<=300)
	 {
		b=(u-100)*0.8+50+60;
		printf("total amount i:%.2f",b);
	 }
	 else if (u>300)
	 {	b=(u-300)*0.9+50+60+160;
		printf("Total amount: %.2f",b);
	 }
	 if (b>300)
	 {
		s=(b*15/100)+b;
		printf("\nSurcharge: %.2f",s);
	 }
	 getch ();
}
