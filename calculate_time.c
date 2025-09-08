#include <stdio.h>

int main ()
{
    int s,h,minute,se;;
    printf("enter number seconds : ");
    scanf("%d",&s);
    h=s/3600;
    minute=(s%3600)/60;
    se=s%60;
    printf("%d seconds = %d hours, %d minutes, %d seconds",s,h,minute,se);
}