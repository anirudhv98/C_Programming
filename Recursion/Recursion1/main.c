#include <stdio.h>
#include <stdlib.h>

int calc(int n)
{
    if(n>0)
    {
        return calc(n-1)+n;
    }
}

int main()
{
    int n;
    printf("Enter n for which sum of first n natural numbers is to be calculated : ");
    scanf("%d",&n);
    int sum=calc(n);
    printf("\nThe sum of first n natural numbers is : %d",sum);
    return 0;
}
