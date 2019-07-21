#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node * next;
}*start=NULL;

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
        if(start == NULL)
        {
            start = temp;
            p=start;
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
    if(start==NULL)
    {
        printf("\nLinked List Empty");
    }
    else
    {
        struct Node *p = start;
        printf("\nThe elements of the list are : ");
        do
        {
            printf("%d ",p->data);
            p=p->next;
        }while(p!=NULL);
    }
}

int elementnos()
{
    int i=0;
    struct Node * p =start;
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        do
        {
            i++;
            p=p->next;
        }while(p!=NULL);
        return i;
    }

}
void insert(int pos)
{
    struct Node *temp,*p;
    //p = (struct Node *)malloc(sizeof(struct Node));
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter data to be inserted : ");
    scanf("%d",&temp->data);
    if (pos==0)
    {
        temp->next=start;
        start=temp;
    }
    else
    {
        p=start;
        if(pos<elementnos())
        {
            for(int i = 0;i<pos-1;i++)
            {
                p=p->next;
            }
            temp->next=p->next;
            p->next=temp;
        }
        else if (pos == elementnos())
        {
            do
            {
                p=p->next;
            }while(p->next!=NULL);
            p->next=temp;
            temp->next=NULL;
        }
        else
        {
            printf("\nInvalid position entered");
        }
    }
}

void del(int pos)
{
    struct Node *temp,*p;
    if(pos==0)
    {
      printf("\nElement being deleted : %d",start->data);
      temp=start;
      start=start->next;
      free(temp);
    }
    else if(pos>0 && pos <elementnos())
    {
        struct Node *p=start,*q;
        for(int i=0;i<pos;i++)
        {
            q=p;
            p=p->next;
        }
        printf("\nElement being deleted : %d",p->data);
        q->next=p->next;
        //p->next=NULL;
        free(p);
    }
    else
    {
        printf("\nWrong position entered");
    }
}

int main()
{
    int size,choice,pos;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\n\t\t\tLINKED LIST OPERATIONS");

    do
    {
        printf("\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :printf("\nEnter position you want to insert element in : ");
                    scanf("%d",&pos);
                    insert(pos);
                    break;
            case 2 :printf("\nEnter position from which you want to delete element : ");
                    scanf("%d",&pos);
                    del(pos);
                    break;
            case 3 :display();
                    break;
            case 4 : printf("\nExiting...");
                    break;
            default : printf("\nWrong option entered...");

        }
    }while(choice != 4);
    scanf("%d",choice);
    return 0;
}
