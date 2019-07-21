#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node * next;
}*top=NULL;


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

void push(int exp)
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

int pop()
{
    int x;
    if(top==NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        struct Node *t = top;
        x = t->data;
        top=top->next;
        free(t);
    }
    return x;
}

int isoperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
        return 0;
    else
        return 1;
}

int eval(char *postfix)
{
    int i=0;
    int x1,x2,r=0;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isoperand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            x2=pop();
            x1=pop();
            switch(postfix[i])
            {
                  case '+' :r=x1+x2;
                  break;
                  case '-' :r=x1-x2;
                  break;
                  case '*' :r=x1*x2;
                  break;
                  case '/' :r=x1/x2;
                  break;
            }
            push(r);
        }
    }
    return top->data;
}
int main()
{
    char *postfix= "234*+82/-";
    printf("Result is %d",eval(postfix));
    return 0;
}
