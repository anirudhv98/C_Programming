#include <stdio.h>
#include <stdlib.h>
int a[10]={3,6,2,12,14,22,5,8,6,10};

void insertionsort(int a[],int size)
{
    int x;
    for(int i=1;i<size;i++)
    {
        x=a[i];
        int j=i-1;
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main()
{
    insertionsort(a,9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
