#include <stdio.h>
#include <stdlib.h>
int a[10]={3,6,2,12,14,22,5,8,6,10};
void bubblesort(int a[10],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        }
    }
}
int main()
{
    bubblesort(a,9);
    for(int i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
