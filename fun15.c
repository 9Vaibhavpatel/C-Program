#include<stdio.h>
int addition(int x, int y)
{
		printf("addition is:%d",x+y);
}
int main()
{
		int a,b;
		printf("Enter a and b:");
		scanf("%d%d",&a,&b);
		addition(a,b);
}