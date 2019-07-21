#include <stdio.h>
#include <stdlib.h>
void length(char *x)
{
    int len=0;
    for(int i=0;x[i]!='\0';i++)
        len++;
    printf("\nThe length is : %d",len);
}
int main()
{
    printf("\nEnter a string : ");
    char x[20];
    gets(x);
    length(x);
    return 0;
}
