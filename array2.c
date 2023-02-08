#include<stdio.h>
int main()
{ 
                int a[5];
                int b[] = {10,20,30,40,50};
                int i;
                for(i=0;i<5;i++)
                {
                 printf("enter : ");
                 scanf("%d",&a[i]);
                }
                 printf("\nA \tB \tTotal");
                for(i=0;i<5;i++) 
                {
                 printf("\n%d \t%d \t%d", a[i],b[i],a[i]+b[i]);
                 }   
}