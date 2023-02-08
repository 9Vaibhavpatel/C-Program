#include<stdio.h>
float rupdollar()
{
	float rs=80,dollar,total;
	printf("Enter total dollar:");
	scanf("%f",&dollar);
	total=rs*dollar;
	return total;
}
int main()
{
	printf("Press Enter Key\n");
	float x = rupdollar();
	printf("Your total ruppees is:%.2f",x);
	printf("\nResult has declared");
}
