#include <stdio.h>

int main()

{
	float p,e,c,m,cm;

	printf("enter the marks of maths out of 200 : ");
	scanf("%f",&m);
	printf("enter the marks of physics out of 200: ");
	scanf("%f",&p);
	printf("enter the marks of chemistry out of 200: ");
	scanf("%f",&c);
	printf("enter the marks of english out of 200: ");
	scanf("%f",&e);
	cm = (m/2)+(p/2)+(c/2)+(e/2);
	printf("cut off mark is %f",cm);
}
	
