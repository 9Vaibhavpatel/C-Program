#include<stdio.h>
void main()
{
	int a[5][5],i,j,s,t;
                 int b[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d] [%d]:",i,j);
		scanf("%d",&a[i][j]);    
		}
	}
	for(s=0;s<3;s++)
	{
		for(t=0;t<3;t++) 
	                 {
		printf("%d",a[t][s]);
	                 }
	printf("\n");
	}
		
}