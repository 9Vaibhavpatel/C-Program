#include<stdio.h>
float fi()
{
	float inch,sen=2.54,total;
	printf("Enter total inch: ");
	scanf("%f",&inch);
	total=sen*inch;
	return total;
}
int main()
{
	printf("Enter inch....\n");
	float x = fi();
	printf("Your total Sentimeters are:%.2f",x);
	printf("\nTotal SM is calculated....");
}
