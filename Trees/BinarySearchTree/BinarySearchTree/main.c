#include <stdio.h>
#include <stdlib.h>
struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;
struct Node * insert(struct Node * p,int data)
{
    struct Node *t;
    if(p==NULL)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->lchild=NULL;
        t->rchild=NULL;
        t->data=data;
        return t;
    }
    if(p->data>data)
        p->lchild=insert(p->lchild,data);
    else
        p->rchild=insert(p->rchild,data);
    return p;
}

struct Node * create()
{
    int no,data,i;
    printf("\nEnter number of nodes : ");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        printf("\nEnter %d element to be inserted : ",(i+1));
        scanf("%d",&data);
        root=insert(root,data);
    }
    return root;
}
struct Node * minValueNode(struct Node* node)
{
    struct Node* current = node;

    /* loop down to find the lchildmost leaf */
    while (current && current->lchild != NULL)
        current = current->lchild;

    return current;
}

/* Given a binary search tree and a data, this function deletes the data
   and returns the new root */
struct Node* deleteNode(struct Node* root, int data)
{
    // base case
    if (root == NULL) return root;

    // If the data to be deleted is smaller than the root's data,
    // then it lies in lchild subtree
    if (data < root->data)
        root->lchild = deleteNode(root->lchild, data);

    // If the data to be deleted is greater than the root's data,
    // then it lies in rchild subtree
    else if (data > root->data)
        root->rchild = deleteNode(root->rchild, data);

    // if data is same as root's data, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->lchild == NULL)
        {
            struct Node *temp = root->rchild;
            free(root);
            return temp;
        }
        else if (root->rchild == NULL)
        {
            struct Node *temp = root->lchild;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the rchild subtree)
        struct Node* temp = minValueNode(root->rchild);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->rchild = deleteNode(root->rchild, temp->data);
    }
    return root;
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
int main()
{
    root=create();
    inorder(root);
    printf("\nDelete 20 : ");
    root=deleteNode(root,20);
    inorder(root);
    printf("\nDelete 30 : ");
    root=deleteNode(root,30);
    inorder(root);
    printf("\nDelete 50 : ");
    root=deleteNode(root,50);
    inorder(root);
    return 0;
}
