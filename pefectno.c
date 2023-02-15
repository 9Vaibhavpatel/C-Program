#include<stdio.h>
#include<conio.h>
void main()
{
		int i,n,sum=0;
		printf("Enter Number:");
		scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			printf("%d+",i);
		}
	}
			if(sum==n)
			{
			printf("\nperfect");
			}
			else
			{
			printf("\nimperfect");
			}
	
}