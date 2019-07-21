#include <stdio.h>
#include <stdlib.h>
int pow(int m,int n)
{
    if(n==0)
        return 1;
    return(pow(m,n-1)*m);
}
int main()
{
    int m,n;
    printf("\nEnter number whose power is to be calculated and it's power : ");
    scanf("%d %d",&m,&n);
    int power=pow(m,n);
    printf("\nThe result is : %d",power);
    return 0;
}
