#include <stdio.h>

int main()
{
    float seconds,minute,hour;
    printf("enter the second you want :");
    scanf("%f",&seconds);
    minute = seconds/60.00;
    printf("\nthe time in minute is %f",minute);
    hour = seconds/3600.00;
    printf("\n the time in hour is %f",hour);
    
}