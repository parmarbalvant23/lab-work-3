#include<stdio.h>

main()

{
	int x,y,z;
	
	printf("enter value x =");
	scanf("%d",&x);
	printf("enter value y =");
	scanf("%d",&y);
	
	z=x;
	x=y;
	y=z;
	
	
	
	printf("sweping value x =%d\n",x);
	printf("sweping value y =%d\n",y);
}