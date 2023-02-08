 #include<stdio.h>
int addition(int x, int y )
{	
	int per;
	per=(x+y)/2;
	return per;
}
int main()
{
	int a,b,x;
	printf("Enter No:");
	scanf("%d%d",&a,&b);
	x=addition(a,b);
	printf("Value of X is:%d",x);
}	
