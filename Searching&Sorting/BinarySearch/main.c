#include <stdio.h>
#include <stdlib.h>
int a[10]={0,1,2,3,5,7,9,12,13,17};
void binsearch(int first,int last,int ele)
{
    int mid;
    mid=(first+last)/2;
    while(first<=last)
    {

        if(a[mid]==ele)
        {
            printf("\nElement is present at %d",mid);
            break;
        }
        else if(a[mid]<ele)
        {
            first=mid+1;
        }
        else if(a[mid]>ele)
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if(first>last)
    {
        printf("\nElement not found");
    }

}
int main()
{
    binsearch(0,9,5);
    return 0;
}
