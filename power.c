#include <stdio.h>
#include <math.h>

int main()

{
    int a,b,c;
    printf("enter the base number :");
    scanf("%d",&a);
    printf("enter the power number :");
    scanf("%d",&b);
    c = pow(a,b);
    printf("the %d ^ %d = %d",a,b,c);
}