#include <stdio.h>
#include <stdlib.h>
void count(char x[])
{
    int count=1;
    for(int i =0;x[i]!='\0';i++)
    {
        if(x[i]==' ' && x[i-1]!=' ')
        {
            count++;
        }
    }
    printf("\nThe number of words are %d",count);

}
int main()
{
    char x[20];
    printf("Enter a word : ");
    gets(x);
    count(x);
    return 0;
}
