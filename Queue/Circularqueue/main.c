#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int start = -1,end=-1,queue[MAX],option,ele;

void insert()
{
    if (start==(end+1)%MAX)
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
            end=(end+1)%MAX;
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
        queue[start]=0;
        if(start==end)
        {
            start=end=-1;
        }
        else
        {
            start=(start+1)%MAX;
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
        int temp=start;
        if(temp==end)
        {
            printf(" %d",queue[temp]);
        }
        else
        {

            do
            {
                printf(" %d",queue[temp]);
                temp=(temp+1)%MAX;
            }while(temp!=end);
            printf(" %d",queue[temp]);
        }
    }
}


int main()
{
    do{
        printf("\n***CIRCULAR QUEUE IMPLEMENTATION***");
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
