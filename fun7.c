#include<stdio.h>
float radius()
{
	float radius,area;
	printf("Enter total radius: ");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	return area;
}
int main()
{
	printf("Enter Radius....\n");
	float x = radius();
	printf("Your total Area of circle is:%.2f",x);
	printf("\nTotal Area of circle is calculated....");
}
