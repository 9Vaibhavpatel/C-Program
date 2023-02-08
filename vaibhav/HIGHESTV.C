#include<stdio.h>
#include<conio.h>
void main()
{
	 int a,b,c;
	 clrscr();
	 printf("enter any three value:");
	 scanf("%d %d %d",&a,&b,&c);
	 if (a>b)
	 { if(a>c)
	 printf("highest value is:%d",a);
	 else
	 printf("highest value is:%d",a);
	 }
	 else
	 { if (b>c)
	 printf("highest value is:%d",b);
	 else
	 printf("highest value is:%d",c);
	 }
	 getch();
}