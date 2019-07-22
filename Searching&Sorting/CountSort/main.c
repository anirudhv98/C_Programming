#include <stdio.h>
#include <stdlib.h>
int a[10]={6,3,9,10,15,6,8,12,3,6};
int max(int a[],int n)
{
    int MAX=a[0];
    for(int i=1;i<n;i++)
    {
        if(MAX<a[i])
            MAX=a[i];
    }
    return MAX;
}

void countsort(int a[],int n)
{
    int MAX=max(a,n);
    int *c,i;
    c=(int *)malloc(sizeof(int)*(MAX+1));
    for(i=0;i<=MAX;i++)
        c[i]=0;
    for(i=0;i<=MAX;i++)
    {
        c[a[i]]++;
    }
    int j=0;
    i=0;
    while(j<MAX+1)
    {
        if(c[j]>0)
        {
            a[i++]=j;
            c[j]--;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    countsort(a,9);
    for(int i=(16-9);i<16;i++)
        printf("%d ",a[i]);
    return 0;
}
