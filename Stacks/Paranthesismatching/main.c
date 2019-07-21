#include <stdio.h>
#include <stdlib.h>
struct Node {
char data;
struct Node * next;
}*top=NULL;

void createLL(char *exp)
{
    struct Node *temp,*p;
    //p = (struct Node *)malloc(sizeof(struct Node));
    for(int i=0;exp[i]!='\0';i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data=exp[i];
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
            printf("%c ",p->data);
            p=p->next;
        }while(p!=NULL);
    }
}

void push(char *exp)
{
    struct Node *t;
    t=(struct Node * )malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        t->data=exp;
        t->next=top;
        top=t;
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
        struct Node *t = top;
        top=top->next;
        free(t);
    }
}

int evaluate(char *exp)
{
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *exp = "((a+b)*(c+d))";
    int eval=evaluate(exp);
    if(eval==1)
    {
        printf("\nParenthesis are matching");
    }
    else
    {
        printf("\nParenthesis aren't matching");
    }

    return 0;
}
