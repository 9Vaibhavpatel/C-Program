#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{	int i,j;
                 scanf("%d",&i);
                 printf("ceil:%f\n",ceil(i));
	scanf("%d",&i);
     	printf("Floor:%f\n",floor(i));
	scanf("%d",&i);
	printf("Round:%f\n",round(i));
	scanf("%d%d",&i,j);
	printf("pow:%.2f\n",pow(i,j));
	scanf("%d",&i);
	printf("Sqrt:%f\n",sqrt(i));
	scanf("%d",&i);
	printf("abs:%d\n",abs(i));
	scanf("%d",&i);
	printf("random:%d\n",rand()%10);
	printf("ceil:%f\n",ceil(0.6));
     	printf("Floor:%f\n",floor(0.6));
	printf("Round:%f\n",round(0.4));
	printf("pow:%.2f\n",pow(0,5));
	printf("Sqrt:%f\n",sqrt(7));
	printf("abs:%d\n",abs(77));
	printf("random:%d\n",rand()%99);
}