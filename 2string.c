#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[50],str1[50];
	int i,j;
	 printf ("first name:  ");
	                               scanf("%s",str);
	          printf("enter second:");
	          scanf("%s",str1);
                 		for(i=0;str[i]>'\0';i++);
		for(j=0;str1[j]>'\0';j++)
		{
		str[i]=str1[j];
		i++;
		}
	str[i]='\0';
	printf("%s",str);
}