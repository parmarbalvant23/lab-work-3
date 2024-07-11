#include<stdio.h>

main()
{
	int x,y,xy;
	printf("enter value x =");
	scanf("%d",&x);
	printf("enter value y =");
	scanf("%d",&y);
	
	xy = (x*x*x) + (3*+(x*y*y)) + (y*y*y);
	
	printf("formula answer =%d",xy);
}