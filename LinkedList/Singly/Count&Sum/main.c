#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node * next;
}*start=NULL,*p;

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

void display(struct Node *p)
{
   if(p!=NULL)
   {
       printf("%d ",p->data);
       display(p->next);
   }
}

int sum(struct Node * p)
{
    if(p!=NULL)
    {
        return (p->data+sum(p->next));
    }
}

void count(struct Node *p)
{
    int counter=0;
    while(p!=NULL)
    {
        counter++;
        p=p->next;
    }
    printf("\nThe total no. of elements are : %d",counter);
}

void max(struct Node *p)
{
    p=start;
    int Max=p->data;
    while(p!=NULL)
    {
        if(p->data>Max)
            Max=p->data;
        p=p->next;
    }
    printf("\nThe maximum element in LL is : %d",Max);
}
int main()
{
    int size,choice,pos;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\nThe elements of linked list are : ");
    struct Node *p=start;
    display(p);
    p=start;
    count(p);
    p=start;
    printf("\nThe sum of all elements are : %d",sum(p));
    max(p);
return 0;
}
