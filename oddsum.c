#include<stdio.h>
void main()
{            int i=1,n,sum=0;
             printf("enter:");
             scanf("%d",&n);      
            while(i<=n)
             {
	sum=sum+i;
             printf("%d ",i);
             
             i+=2;
           
             }  
            printf("\ntotal:%d",sum);            
}