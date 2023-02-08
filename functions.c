#include<stdio.h>
int addition()
{
	int a,b;
	printf("Enter A number:");
	scanf("%d",&a);
	printf("Enter B number:");
	scanf("%d",&b);
	printf("Addition of a and b:%d",a+b);
}
int main()
{
	printf("Press Enter Key\n");
	addition();
	printf("\nYour addition is declared");
}
