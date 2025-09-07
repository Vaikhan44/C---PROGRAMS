// to calculate the total marks and to calculate the percentage of 5 subject
#include <stdio.h>

int main()
{
    int p, e, c, m, com, t;
    float per;
    printf("enter the marks of maths : ");
    scanf("%d", &m);
    printf("enter the marks of physics : ");
    scanf("%d", &p);
    printf("enter the marks of chemistry : ");
    scanf("%d", &c);
    printf("enter the marks of english : ");
    scanf("%d", &e);
    printf("enter the marks of computer : ");
    scanf("%d", &com);
    t = p + e + c + m + com;
    printf("\nthe total marks is %d", t);
    per = (t * 100) / 500;
    printf("\nthe percentage is %f", per);
    if (per >= 90)
    {
        printf("\nyou have grade A");
    }
    else if (per >= 80 && per <= 90)
    {
        printf("\nyou have grade B");
    }
    else if (per >= 70 && per <= 80)
    {
        printf("\nyou have grade C");
    }
    else if (per >= 60 && per <= 70)
    {
        printf("\nyou have grade C");
    }
    else if (per >= 34 && per <= 60)
    {
        printf("\nyou have grade D");
    }
    else
    {
        printf("\nyou are FAIL");
    }
}
