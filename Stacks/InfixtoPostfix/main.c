#include <stdio.h>
#include <stdlib.h>
struct Node {
char data;
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

char pop()
{
    char x;
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
int pre(char x)
{
    if(x=='+'||x=='-')
        return 1;
    else if (x=='*' || x=='/')
        return 2;
    return 0;
}

int isoperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='*')
        return 0;
    else
        return 1;
}

char *infixtopostfix(char *infix)
{
    int i,j;
    int len=strlen(infix);
    i=j=0;
    char *postfix = (char *)malloc((len+2)*sizeof(char));
    while(infix[i]!='\0')
    {
        if(isoperand(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if(pre(infix[i])>pre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}


int main()
{
    char *exp = "a+b*c";
    push('#');
    char *postfix = infixtopostfix(exp);
    printf("%s",postfix);
    return 0;
}
