#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[]="abba";
    int i=0,flag=0,j;
    for(i=0;x[i]!='\0';i++)
    {
    }
    j=i-1;
    for(i=0;i<j;i++,j--)
    {
        if(x[i]==x[j])
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nThe string is a palindrome");
    }
    else if(flag!=0)
    {
        printf("\nThe string is not a palindrome");
    }

    return 0;
}
