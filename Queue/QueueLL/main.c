#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node * next;
}*front=NULL,*rear=NULL;

void createLL(int n)
{
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter element at %d position : ",i+1);
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(front == NULL)
        {
            front=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}

void display()
{
    if(front==NULL)
    {
        printf("\nLinked List Empty");
    }
    else
    {
        struct Node *p = front;
        printf("\nThe elements of the stack are : ");
        do
        {
            printf("%d ",p->data);
            p=p->next;
        }while(p!=NULL);
    }
}

void insert(int x)
{
    struct Node *t;
    t=(struct Node * )malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}

void del()
{
    if(front==NULL)
    {
        printf("\nQueue empty");
    }
    else
    {
        printf("\Deleting element %d",front->data);
        struct Node *t = front;
        front=front->next;
        free(t);
    }
}

int main()
{
    int size,choice,pos,x;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\n\t\t\QUEUE OPERATIONS");

    do
    {
        printf("\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :printf("\nEnter element to be inserted : ");
                    scanf("%d",&x);
                    insert(x);
                    break;
            case 2 :del();
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
