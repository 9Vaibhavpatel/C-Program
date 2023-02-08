#include<stdio.h>
float fi()
{
	float c,f=32,total;
	printf("Enter total celsious: ");
	scanf("%f",&c);
	total=(c*9/5)+32;
	return total;
}
int main()
{
	printf("Enter celsious....\n");
	float x = fi();
	printf("Your total Ferahint are:%.2f",x);
	printf("\nTotal Ferahient is calculated....");
}
