#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],str1[50];
	int i,j;
	printf("Enter string:");
	scanf("%[^\n]s",str);
	
	//for(i=0;str[i] != '\0';i++);
	i=strlen(str);
	printf("\n Your string is:%c",str[0]);
	printf("\n Your string is:%c",str[i-1]);
}