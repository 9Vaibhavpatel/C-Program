#include<stdio.h>
void main()
{
	int a[5][5],i,j,k,l;
                 int b[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d] [%d]:",i,j);
		scanf("%d",&a[i][j]);    
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d] [%d]:",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	printf("A1\tB1\tAdd\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",a[i][j]);
	                 }
                                  printf(" ");
		for(j=0;j<3;j++)
                                   {
                                   printf("%d ",b[i][j]);
                                   }
                                   printf("");
                                   for(j=0;j<3;j++)
                                   {
		printf("%d",a[i][j]+b[i][j]);
		}
	printf("\n");
	}
}