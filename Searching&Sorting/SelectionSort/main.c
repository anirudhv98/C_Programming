#include <stdio.h>
#include <stdlib.h>
int a[10]={3,6,2,12,14,22,5,8,6,10},minindx,temp;
void selectionsort(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        minindx=i;
        for(int j=i+1;j<=size;j++)
        {
            if(a[j]<a[minindx])
            {
                minindx=j;
            }
        }
        temp=a[i];
        a[i]=a[minindx];
        a[minindx]=temp;
    }
}
int main()
{
    selectionsort(a,9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
