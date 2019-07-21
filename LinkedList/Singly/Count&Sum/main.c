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
int main()
{
    int size,choice,pos;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\nThe elements of linked list are : ");
    struct Node *p=start;
    display(p);
    count(p);
    printf("\nThe sum of all elements are : %d",sum(p));
return 0;
}
