#include<stdio.h>
int main()
{ 
                int a[5];
                int b[]={10,20,30,40,50,60,70};
                int i;
                for(i=0;i<5;i++)
                {
                          printf(''enter a [%d]: ",i);
                          scanf("%d",&a[i]);
                }
                for(i=0;i<8;i++)
                {
                          printf("\n b[%d]: %d",i,b[i]);
                }
}