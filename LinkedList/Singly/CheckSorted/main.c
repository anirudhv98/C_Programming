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

void check()
{
    struct Node *p;
    p=start;
    int flag=0,x=start->data;
    while(p!=NULL)
    {
        if((p->data)<x)
        {
            flag++;
        }
        x=p->data;
        p=p->next;
    }
    if(flag == 0)
    {
        printf("\nThe LL is sorted");
    }
    else
    {
        printf("\nThe LL is not sorted");
    }
}

int main()
{
    int size,ele;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    check();
    return 0;
}


