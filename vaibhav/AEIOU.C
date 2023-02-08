
#include<stdio.h>
#include<conio.h>
void main()
{       char ch;
	clrscr();
	printf("ENTER YOUR CHAR:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("VOVEL");
	else
	printf("consonant");
	getch();
}