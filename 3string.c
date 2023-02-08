#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{	
	char str[50],i,j,str1[50];
	printf("ENTER YOUR STRING:");
	scanf("%s",str);

	printf("ENTER YOUR STRING:");
	scanf("%s",str1);

	for(i=0;str[j]!='\0';i++)
	{
		for(j=0;str1[i]!='\0';j++)
	        {
		str[j]=str1[i];
	        }
	i++;
	}
	str[j]='\0';
	printf("name:%s",str[j]);


}	
