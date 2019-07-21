#include <stdio.h>
int validate(char x[])
{
    for(int i = 0;x[i]!='\0';i++)
    {
        if(!(x[i]>=65 && x[i]<=90)&&!(x[i]>=97&&x[i]<=122)&&!(x[i]>=48 && x[i]<=57))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char x[20];
    printf("Enter a word : ");
    gets(x);
    int val=validate(x);
    if(val==1)
    {
        printf("\nValid string");
    }
    else
    {
        printf("\nInvalid string");
    }
    return 0;
}
