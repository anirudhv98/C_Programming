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

void search(int ele)
{
    struct Node *p;
    p=start;
    int flag=0;
    while(p!=NULL)
    {
        if(ele==p->data)
        {
            printf("\nThe element is present in LL");
            flag=1;
            break;
        }
        p=p->next;

    }
    if(flag==0)
    {
        printf("\nElement is not present in LL");
    }
}

int main()
{
    int size,ele;
    printf("\nEnter size of linked list : ");
    scanf("%d",&size);
    createLL(size);
    printf("\nEnter element to be searched for : ");
    scanf("%d",&ele);
    search(ele);
    return 0;
}
