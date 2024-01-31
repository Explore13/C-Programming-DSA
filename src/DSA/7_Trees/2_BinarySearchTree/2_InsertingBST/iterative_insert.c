// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include "NewHeader.h"

struct node {
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

struct node *newNode(int key)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data=key;
    node->lchild=node->rchild=NULL;
    return node;
}
void createTree(struct node *t,int key) {
if(t==NULL)
{
    t = newNode(key);
    return;
}
if(key<t->data)
{
    createTree(t)
}



}


void inOrder(struct node *t) {
    if (t != NULL) {
        inOrder(t->lchild);
        printf("%d ", t->data);
        inOrder(t->rchild);
    }
}

/* Iterative Insert */
void insertKey(struct node *t, int value) {
    if (t == NULL)
        return;
    struct node *r = NULL, *newChild;
    while (t != NULL) {
        if (t->data == value) {
            printf("\nValue is Found");
            return;
        }
        r = t;
        if (t->data < value)
            t = t->rchild;
        else
            t = t->lchild;


    }
    newChild = (struct node *) malloc(sizeof(struct node));
    newChild->data = value;
    newChild->lchild = newChild->rchild = NULL;
    if (value < r->data)
        r->lchild = newChild;
    else
        r->rchild = newChild;
}

int main() {
    while (1) {
        int ch, key;
        printf("\nChoice : \n1. CreateTree : \n2. InsertTree : \n 3. InOrder : \nChoose your option : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\nEnter data : ");
                scanf("%d",&key);
                createTree(root,key);
                inOrder(root);
                break;
            case 2:
                //  int key; It will show an error because ANSI C does not allow variable declarations in the middle of a block.
                /*
                 {
                     int key;
                     printf("\nEnter Key to Insert : ");
                     scanf("%d", &key);
                     insertKey(root, key);
                     inOrder(root);
                     break;
                 }
                 We may use the curly braces or declare variables on the top of the block.
                 */
                printf("\nEnter Key to Insert : ");
                scanf("%d", &key);
                insertKey(root, key);
                inOrder(root);
                break;
            case 3:
                inOrder(root);
                break;
            default:
                inOrder(root);
                exit(0);
        }
    }

    return 0;
}
