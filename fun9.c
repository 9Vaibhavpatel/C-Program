#include<stdio.h>
float smallest()
{
	int a,b;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	if(a<b)
	{
	printf("Smallest:%d",a);
	}
	if(a>b)
	{
	printf("Smallest:%d",b);
	}
	
}
int main()
{
	printf("Hello....\n");
	smallest();
	printf("\nTata bye bye see you...");
}
