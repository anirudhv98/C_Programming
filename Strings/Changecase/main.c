#include <stdio.h>
#include <stdlib.h>
void changecase(char x[])
{
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
        {
            x[i]=x[i]+32;
        }
        else if(x[i]>=97 && x[i]<= 122)
        {
            x[i]-=32;
        }
    }
    printf("%s",x);
}
int main()
{
    printf("\nEnter a string whose cases are to be changed : ");
    char x[50];
    gets(x);
    changecase(x);
    return 0;
}
