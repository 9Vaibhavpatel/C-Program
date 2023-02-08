#include<stdio.h>
void main()
{            int i=1,n;
             printf("enter:");
             scanf("%d",&n);      
             do
             {
             printf("%d ",i*i);
             i++;           
             }  
             while(i<=n);
}