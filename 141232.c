#include<stdio.h>
void main()
{            int i=1,n,a=1;
             printf("enter:");
             scanf("%d",&n);      
            while(i<=n)
             {
           
             printf("%d\t",i*a);
           a=a*2;  
             i++;
           }             
} 