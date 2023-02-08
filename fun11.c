#include<stdio.h>
float leapyear()
{
	int a,b;
	printf("Enter Year:");
	scanf("%d",&a);
	if(a%4==0)
	{
	printf("Leap Year");
	}
	else
	{
	printf("Normal Year");
	}
}
int main()
{
	printf("Hello....\n");
	leapyear();
	printf("\nTata bye bye see you...");
}
