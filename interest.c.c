#include <stdio.h>

int main()
{
	int intr,p,t;
	float r;
	printf("enter your amount :");
	scanf("%d",&p);
	printf("enter the rate of interest :");
	scanf("%f",&r);
	printf("enter the number of year :");
	scanf("%d",&t);
	intr = (p*r*t)/100;
	printf("the rate of interest is %d",intr);
	
	
	
}
