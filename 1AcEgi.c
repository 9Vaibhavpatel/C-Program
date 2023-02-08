#include<stdio.h>
void main()
{            char i=65,n;
             //printf("enter:");
             //scanf("%",&n);      
            do
          {
             if (i%4==1)
            {       
             printf("%c\t",i);
            }
             else
            {
             printf("%c\t",i+32);
            } 
            i+=2; 
          }while(i<=90);
} 