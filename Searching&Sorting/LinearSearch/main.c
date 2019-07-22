#include <stdio.h>
#include <stdlib.h>
void lsearch(int a[],int size,int ele)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==ele)
        {
            printf("\nThe element is present at %d index",i);
            flag++;
        }
    }
    if(flag==0)
    {
        printf("\nThe element is not present in the list");
    }
}
int main()
{
    int a[10]={3,6,2,12,14,22,5,8,6,10};
    lsearch(a,10,5);
    return 0;
}
