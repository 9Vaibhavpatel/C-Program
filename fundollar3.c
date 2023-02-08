#include<stdio.h>
float fi()
{
	float inch=12,feet,total;
	printf("Enter total feet: ");
	scanf("%f",&feet);
	total=feet*inch;
	return total;
}
int main()
{
	printf("Enter Feet....\n");
	float x = fi();
	printf("Your total feet is:%.2f",x);
	printf("\nTotal inch is calculated....");
}
