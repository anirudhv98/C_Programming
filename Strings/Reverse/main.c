#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[]="python",temp;
    int i=0,j=0;
    for(j=0;A[j]!='\0';j++)
    {
    }
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("%s",A);
}
