#include<stdio.h>
void main()
{
                        int i,a[10];
                        int even=0,odd=0;
                    
                     for (i=1;i<10;i++)
	{
                    printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
                   }
	for(i=1;i<10;i++)
                    {
		if(a[i]%2==0)
		{
			even=even+a[i];
		}
		else if(a[i]%2!=0)
		{
			odd=odd+a[i];
		}
	}
	printf("\nsum of even or odd position:%d",even+odd);
	//printf("\nsum of even position:%d",odd);
}
	
		
