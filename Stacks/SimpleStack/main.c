#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1,stack[MAX],option,ele;

void push()
{
    if (top == MAX-1)
    {
        printf("\nStack Overflow...");
    }
    else
    {
       printf("\nEnter element to be pushed : ");
       scanf("%d",&ele);
       top++;
       stack[top]=ele;
       printf("\nElement inserted successfully...\n") ;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow...\n");
    }
    else
    {
        printf("\nElement deleted is %d\n",stack[top]);
        top--;
    }
}

void peek()
{
    if (top==-1)
    {
        printf("Stack underflow...\n");
    }
    else
    {
        printf("The element on top of stack is : %d\n",stack[top]);
    }
}

void display()
{
    if (top==-1)
    {
        printf("Stack underflow...\n");
    }
    else
    {
        printf("\nThe elements of stack are : ");
        int temp=top;
        while(temp > -1)
        {
            printf(" %d",stack[temp]);
            temp--;
        }
    }
}

int main()
{
    do{
        printf("\n***STACK IMPLEMENTATION***");
        printf("\nEnter 1 for inserting elements into stack");
        printf("\nEnter 2 for deleting element from stack");
        printf("\nEnter 3 for peeking into stack");
        printf("\nEnter 4 for displaying elements of stack");
        printf("\nEnter 5 to exit");
        printf("\nEnter your option : ");
        scanf("%d",&option);

        switch(option)
        {
            case 1 :push();
                    break;

            case 2 : pop();
                    break;

            case 3 : peek();
                    break;

            case 4 : display();
                    break;

            case 5 : printf("\nExiting...");
                    break;

            default : printf("\nWrong option entered...");


        }

    }while(option!=5);
    return 0;
}
