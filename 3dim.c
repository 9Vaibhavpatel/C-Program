#include<stdio.h>
void main()
{
	int a[5][5],i,j,k,l;
                 int b[5][5];
	int s=0,m=0,f=0;
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
		printf("%d ",a[i][j]);
	                 }
                                  printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	       {
		if(i==j)
		{
		s+=a[i][j];
		}
		else if(i<j)
		{
		m+=a[i][j];
		}
		else if(i>j)
		{
		f+=a[i][j];
		}
	       }
	}
	printf("Diogonal:%d",s);	
	printf("\nUpper:%d",m);
	printf("\nLower:%d",f);
			
}