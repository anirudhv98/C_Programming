#include <stdio.h>
#include <stdlib.h>
void count(char x[])
{
    int vow=0,con=0;
    for(int i =0;x[i]!='\0';i++)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }
    printf("\nThe number of vowels & consonants are : %d %d",vow,con);

}
int main()
{
    char x[20];
    printf("Enter a word : ");
    gets(x);
    count(x);
    return 0;
}
