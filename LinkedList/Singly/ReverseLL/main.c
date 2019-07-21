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

void reverse()
{
    struct Node *p,*q,*r;
    p=start;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    start=q;
}
int main()
{
    int size,ele;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\nNow reversing LL elements ...");
    reverse();
    printf("\nThe LL after reversal is  : ");
    display(start);
    return 0;
}
