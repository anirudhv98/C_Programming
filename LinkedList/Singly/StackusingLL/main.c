#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node * next;
}*top=NULL;

void createLL(int n)
{
    struct Node *temp,*p;
    //p = (struct Node *)malloc(sizeof(struct Node));
    for(int i=0;i<n;i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter element at %d position : ",i+1);
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(top == NULL)
        {
            top = temp;
            p=top;
        }
        else
        {
            p->next=temp;
            p=temp;
        }
    }
}

void display()
{
    if(top==NULL)
    {
        printf("\nLinked List Empty");
    }
    else
    {
        struct Node *p = top;
        printf("\nThe elements of the stack are : ");
        do
        {
            printf("%d ",p->data);
            p=p->next;
        }while(p!=NULL);
    }
}

void push()
{
    struct Node *t;
    t=(struct Node * )malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter element to be pushed : ");
        scanf("%d",&t->data);
        t->next=top;
        top=t;
        printf("\nElement inserted : %d",top->data);
    }
}

void pop()
{
    if(top==NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nPopping element %d",top->data);
        struct Node *t = top;
        top=top->next;
        free(t);
    }
}

int main()
{
    int size,choice,pos;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\n\t\t\STACK OPERATIONS");

    do
    {
        printf("\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :push();
                    break;
            case 2 :pop();
                    break;
            case 3 :display();
                    break;
            case 4 : printf("\nExiting...");
                    break;
            default : printf("\nWrong option entered...");

        }
    }while(choice != 4);
    scanf("%d",&choice);
    return 0;
}
