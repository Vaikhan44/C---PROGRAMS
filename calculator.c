#include <stdio.h>

int main()

{
    int a,b;
    char cha;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    printf("enter the operator you want to perform on this two operend (+,-,/,*) :");
    scanf(" %c", &cha);

    switch (cha)
    {
    case '+':
        printf("\n%d + %d = %d",a ,b ,a+b);  //for addidtion
        break;
    
    case '-':
        printf("\n%d - %d = %d",a ,b ,a-b); //for substraction
        break;

    case '*':
        printf("\n%d * %d = %d",a ,b ,a*b); // for multiplication
        break; 

    case '/':
        printf("\n%d / %d = %d",a ,b ,a/b); //for divison
        break;
    
    default:
        printf("\nyou entered the wrong operator enter from the given"); //in case of user entered the wrong character
        break;
    }
}