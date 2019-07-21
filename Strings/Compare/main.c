#include <stdio.h>
#include <stdlib.h>
int length(char x[])
{
    int i=0;
    for(i=0;x[i]!='\0';i++)
    {
    }
    return i;
}

int main()
{
    char a[]="Paint";
    char b[]="Paint";
    int flag=0;
    int len1=length(a);
    int len2=length(b);
    if(len1==len2)
    {
        for(int i=0;i<len1;i++)
        {
            if(a[i]==b[i])
                flag=0;
            else
                flag=1;
        }
        if(flag==0)
        {
            printf("\nThe two strings are equal");
        }
        else if(flag!=0)
        {
            printf("\nThe two strings are unequal");
        }
    }
    else
    {
        printf("The two strings are unequal");
    }
    return 0;
}
