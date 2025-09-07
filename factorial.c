#include <stdio.h>

int main()
{
    int a;
    int mul=1;
    printf("enter the number you want to do factorial :");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        mul *=i;
    }
    printf("factorial of %d is %d",a,mul);
}