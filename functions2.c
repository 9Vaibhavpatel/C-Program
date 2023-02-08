#include<stdio.h>
int addition()
{
	int a,b;
	printf("Enter A number:");
	scanf("%d",&a);
	printf("Enter B number:");
	scanf("%d",&b);
	return a+b;
}
int main()
{
	printf("Press Enter Key\n");
	int x = addition();
	printf("Your addition of a and b is:%d",x);
	printf("\nYour addition is declared");
}
