#include<stdio.h>
#include<conio.h>
void main()
{
	    int i,n,sum=0;
	    clrscr();
	    printf("Enter Number:");
	    scanf("%d",&n);
	    for (i=1;i<=n;i+=2)
	    {
	    printf("%d\t",i);
	    sum +=i;
	    }
	    printf("total sum is:%d",sum);
	    getch();
}