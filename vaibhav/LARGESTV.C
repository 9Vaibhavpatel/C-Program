#include<stdio.h>
#include<conio.h>
void main()
{
	     int a,b,c;
	     clrscr();
	     printf("enter three value:");
	     scanf("%d %d %d",&a,&b,&c);
	     if(a>b)
		  printf("highest value is:%d",a);
	      if(b>c)
	      printf("highest value is:%d",b);
	      if (c>a)
	      printf("highest value is:%d",c);
	      getch();
}
