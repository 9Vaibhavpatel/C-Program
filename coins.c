#include<stdio.h>
#include<conio.h>
int main()
{
		int a[8]={200,500,200,100,50,20,10,5};
		int i,n;
		printf("Enere Amount:");
		scanf("%d",&n);
		
		for(i=0;i<8;i++)
		{
			if(n>=a[i])
			{
			printf("\n%d Note is= %d",a[i],n/a[i]);
			n=n%a[i];
			}
		}
}