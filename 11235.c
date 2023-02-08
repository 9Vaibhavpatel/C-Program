#include<stdio.h>
void main()
{            int i=1,n,a=1,b=0,c;
             printf("enter:");
             scanf("%d",&n);      
            while(i<=n)
             {
              c=a+b;
	a=b;
	b=c;	
           
             printf("%d\t",c);  
             i++;
           }             
} 