
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	a=50;
	clrscr();

	    printf("%d\n",a++); //50
	    printf("%d\n",--a);//50
	    printf("%d\n",a--);//50
	    printf("%d\n",--a);//48
	    printf("%d\n",a++);//48
	    printf("%d\n",--a);//48
	    printf("%d\n",a++);//48
	    printf("%d\n",a--);//49
	    printf("%d\n",++a);//49
	    printf("%d\n",a--);//49
	    printf("%d",++a);//49
	    printf("%d",a--);//49
	    printf("%d",--a);//47
	    printf("%d",a--);//47
	    printf("%d",a--);//46
	    printf("%d\n",++a);//46
	    printf("%d\n",a--);//46
	    printf("%d\n",--a);//44
	    printf("%d\n",a++);//44//
	    printf("%d\n",--a);//44
	    printf("%d\n",a--);//44
	    printf("%d\n",a--);//43
	    printf("%d\n",--a);//41
	    printf("%d\n",a++);//41
	    printf("%d\n",--a);//41
	    printf("%d\n",a--);//41
	    printf("%d\n",++a);//41
	    printf("%d\n",a--);//41
	    getch();
}
