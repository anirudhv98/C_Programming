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
    char a[]="decimal";
    char b[]="medical";
    int i,H[26]={0};
    int len1=length(a);
    int len2=length(b);
    if (len1==len2)
    {
        for(i=0;a[i]!='\0';i++)
        {
            H[a[i]-97]+=1;
        }
        for(i=0;b[i]!='\0';i++)
        {
            H[b[i]-97]-=1;
            if(H[b[i]-97]<0)
            {
                printf("\nNot an anagram");
                break;
            }
        }
        if(b[i]=='\0')
        {
            printf("\nIt's an anagram");
        }
    }
    else
    {
        printf("\nNot an anagram");
    }
    return 0;
}
