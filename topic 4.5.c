#include<stdio.h>

main()

{
	int x,y;
	
	printf("enter value x =");
	scanf("%d",&x);
	printf("enter value y =");
	scanf("%d",&y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	
	printf("\n-------------------\n");
	printf("sweping value x =%d\n",x);
	printf("sweping value y =%d\n",y);
}