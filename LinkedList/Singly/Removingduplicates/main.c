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

void remduplicate()
{
    struct Node *p = start;
    struct Node *q = start->next;
    while(q!=NULL)
    {
        if(p->data==q->data)
        {
            p->next=q->next;
            q->next=NULL;
            free(q);
            q=p->next;
        }
        else
        {   p=q;
            q=q->next;
        }
    }
}

int main()
{
    int size,ele;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\nNow deleting duplicate elements ...");
    remduplicate();
    printf("\nThe LL after removing duplicates is : ");
    display(start);
    return 0;
}


