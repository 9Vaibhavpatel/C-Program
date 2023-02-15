#include<stdio.h>
#include<conio.h>
int main()
{
		int n,i=0,reverse=0,rem;
		printf("Enete number");
		scanf("%d",&n);
		
		while(n>0)
		{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
		//printf("Your Rev No:%d",b);
		}
		printf("Your Rev No:%d",reverse);
	return 0;
}