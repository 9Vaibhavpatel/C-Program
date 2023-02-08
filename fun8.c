#include<stdio.h>
float simintr()
{
	float amt,intr,total;
	printf("Enter Amt:");
	scanf("%f",&amt);
	printf("Enter Rate:");
	scanf("%f",&intr);
	total=(amt*intr)/100;
	return total;
}
int main()
{
	printf("Enter Amt....\n");
	float x = simintr();
	printf("Your total sim int is:%.2f",x);
	printf("\nTotal intrest is calculated....");
}
