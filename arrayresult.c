#include<stdio.h>
int main()
{ 
                  int name[5] ,s[5],m[5],h[5];
                  int sum;
                  int pass,fail,i;
                  float p;
                  for(i=0;i<5;i++)
                  {
                  printf("name:");
                  scanf("%d",&name[i]);
                   }
                   printf("\n");
                   for(i=0;i<5;i++)
                   {
                   printf("sci: ");
                   scanf("%d",&s[i]);
                   }
                    printf("\n");
                   for(i=0;i<5;i++)
                   {
                   printf("hist: ");
                   scanf("%d",&h[i]);
                   }
 	 printf("\n");
                   for(i=0;i<5;i++)
                   {
                   printf("math:");
                   scanf("%d",&m[i]);
                   }
                  printf("\n");
                  printf("RollNo:\tscience\thistory\tmaths\ttotal\tper\tstutus\tgrade");
                
                  for(i=0;i<5;i++)
                   {
                  sum=m[i]+s[i]+h[i];
                  
                  p=(float)sum/3;
                 
                
                   printf("\n%d \t%d \t%d \t%d \t%d \t%.1f ",name[i],s[i],h[i],m[i],sum,p);
                 
                   // printf("\n%d \t%d \t%d \t%d \t%d \t%.1f",name[i],s[i],h[i],m[i],sum,p);
                  
                  if(p>50)
	{
	printf("\tPass");
                    }
                  else
                   {
	printf("\tFail");
	}
                  if(p>=75)
                   {
                    printf("\tA");
                    }
                  else if(p<=74&&p>=60)
	{
	printf("\tB");    
	}
                 else if(p<=59&&p>=45)
                   {               
	printf("\tC");
	}
	else if(p<=44)
                   {
                  printf("\tD");
                 }

              }

}