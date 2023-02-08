#include<stdio.h>
float posi()
{
	int a,b;
	printf("Amt:");
	scanf("%d",&a);
	if(a<0)
	{
	printf("Negative Value");
	}
	if(a>0)
	{
	printf("Positive Value");
	}
}
int main()
{
	printf("Hello....\n");
	posi();
	printf("\nTata bye bye see you...");
}
