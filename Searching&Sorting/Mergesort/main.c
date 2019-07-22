#include <stdio.h>
#include <stdlib.h>
int a[10]={3,6,2,12,14,22,5,8,6,10};




int main()
{
    selectionsort(a,9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
