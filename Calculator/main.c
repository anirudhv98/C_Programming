#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***CALCULATOR***\n");
    float a,b;
    char ch;
    printf("\nEnter + for addition");
    printf("\nEnter - for subtraction");
    printf("\nEnter * for multiplication");
    printf("\nEnter / for division");
    printf("\nEnter your option : \n");
    scanf("%c",&ch);
    printf("\nEnter first number : ");
    scanf("%f",&a);
    printf("\nEnter second number : ");
    scanf("%f",&b);
    switch(ch)
        {
        case '+' : printf("The sum is %f",a+b);
        break;
        case '-' : printf("The sum is %f",a-b);
        break;
        case '*' : printf("The sum is %f",a*b);
        break;
        case '/' : printf("The sum is %f",a/b);
        break;
        default : printf("\nWrong option entered");
        }

    return 0;
}
