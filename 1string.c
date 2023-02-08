#include<stdio.h>
#include<string.h>
int main()
{	
	char str[50];
	int i,j,k;
		printf("Enter string:");
		scanf("%[^\n]s",str);

		for(i=0;str[i] != '\0' ;i++);
		printf("len:%d\n",i);
		k=i;
		for(j=0;j<(i/2);j++)
		{
		printf("%c%c",str[j],str[--k]);
		}
	if(i%2!=0)
	{
	printf("%c",str[(i/2)]);
	}
	
}	