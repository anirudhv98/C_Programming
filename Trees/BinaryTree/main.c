#include <stdio.h>
#include <stdlib.h>
struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root = NULL;

struct Node * create()
{
    struct Node *temp=root;
    int x;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        printf("\nExceeded the node limit");
    }
    else
    {
        printf("\nEnter the data to be entered,Enter -1 if you dont want to create a node. : ");
        scanf("%d",&x);
        if(x!=-1)
        {
            temp->data=x;
            printf("\nEnter left child of %d",temp->data);
            temp->lchild=create();
            printf("\nEnter right child of %d",temp->data);
            temp->rchild=create();
            return temp;
        }
        else
        {
            return NULL;
        }
    }
}

void preorder(struct Node *t)
{
    if(t!=NULL)
    {
        printf("%d ",t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
void inorder(struct Node *t)
{
    if(t!=NULL)
    {
        inorder(t->lchild);
        printf("%d ",t->data);
        inorder(t->rchild);
    }
}
void postorder(struct Node *t)
{
    if(t!=NULL)
    {
        postorder(t->lchild);
        postorder(t->rchild);
        printf("%d ",t->data);
    }
}

int counttotalnodes(struct Node *t)
{
    int no=0;
    if(t==NULL)
        return 0;
    else
    {
        no=1+counttotalnodes(t->lchild)+counttotalnodes(t->rchild);
    }

}

int countleafnodes(struct Node *t)
{
    int no=0;
    if(t==NULL)
        return 0;
    else if(t->lchild==NULL && t->rchild==NULL)
        return 1;
    else
        no=countleafnodes(t->lchild)+countleafnodes(t->rchild);
}

int height(struct Node *t)
{
    int hl,hr;
    if(t==NULL)
        return 0;
    else
    {
        hl=height(t->lchild);
        hr=height(t->lchild);

        if(hl>hr)
            return hl+1;
        else
            return hr+1;
    }
}
int main()
{
    root=create();
    printf("\nPreorder representation : ");
    preorder(root);
    printf("\nInorder representation : ");
    inorder(root);
    printf("\nPostorder representation : ");
    postorder(root);
    printf("\nThe total number of nodes in tree is : %d",counttotalnodes(root));
    printf("\nThe number of leaf nodes in tree is : %d",countleafnodes(root));
    printf("\nThe height of the tree is : %d",height(root));
    return 0;
}
