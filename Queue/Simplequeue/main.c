#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int start = -1,end=-1,queue[MAX],option,ele;

void insert()
{
    if (end == MAX-1)
    {
        printf("\nQueue full...\n");
    }
    else
    {
        printf("\nEnter element to be inserted : ");
        scanf("%d",&ele);
        if(start==-1&&end==-1)
        {
            start=end=0;
        }
        else
        {
            end++;
        }
        queue[end]=ele;
        printf("\nElement inserted successfully...");
    }
}

void del()
{
    if(start==-1)
    {
        printf("\nQueue is empty...");
    }
    else
    {
        printf("\nElement deleted is : %d\n",queue[start]);
        if(start==end)
        {
            start=end=-1;
        }
        else
        {
            start++;
        }
    }

}

void display()
{
    if(start==-1)
    {
        printf("\nQueue is empty...\n");
    }
    else
    {
        printf("\nThe elements of queue are : ");
        for(int i = start;i<=end;i++)
        {
            printf(" %d",queue[i]);
        }
    }
}


int main()
{
    do{
        printf("\n***QUEUE IMPLEMENTATION***");
        printf("\nEnter 1 for inserting elements into queue");
        printf("\nEnter 2 for deleting element from queue");
        printf("\nEnter 3 for displaying elements of queue");
        printf("\nEnter 4 to exit");
        printf("\nEnter your option : ");
        scanf("%d",&option);

        switch(option)
        {
            case 1 :insert();
                    break;

            case 2 : del();
                    break;

            case 3 : display();
                    break;

            case 4 : printf("\nExiting...");
                    break;

            default : printf("\nWrong option entered...");


        }

    }while(option!=4);
    return 0;
}
