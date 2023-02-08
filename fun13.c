 #include<stdio.h>
int addition(int x, int y)
{	
	printf("addition is:%d",x+y);
}
int main()
{
	int a,b;
	printf("Enter No:");
	scanf("%d%d",&a,&b);
	printf("Enter a and b",&a,&b);
	addition(a,b);
}	
