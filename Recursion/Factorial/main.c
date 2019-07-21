#include <stdio.h>
#include <stdlib.h>
int calc(int n)
{
    if(n>1)
    {
        return(calc(n-1)*n);
    }
}
int main()
{
    int n;
    printf("Enter number whose factorial is to be calculated : ");
    scanf("%d",&n);
    int factorial=calc(n);
    printf("\nThe factorial of entered number is : %d",factorial);
    return 0;
}
