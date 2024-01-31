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

/* Create or Insert Binary Search Tree */
void insertCreateBinaryTree(int key) {
    struct node *r = NULL, *t = root;
    if (t == NULL) {
        struct node *newChild = (struct node *) malloc(sizeof(struct node));
        newChild->data = key;
        newChild->lchild = newChild->rchild = NULL;
        root = newChild;
        return;
    }
    while (t != NULL) {
        r = t;
        if (t->data == key)
            return;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    struct node *newChild = (struct node *) malloc(sizeof(struct node));
    newChild->data = key;
    newChild->lchild = newChild->rchild = NULL;
    if (key < r->data)
        r->lchild = newChild;
    else if (key > r->data)
        r->rchild = newChild;
}

/* Searching in a Binary Search Tree */
struct node *searching(int key) {
    struct node *t=root;
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}

/* InOrder Traversal */
void inOrder(struct node *t)
{
    if(t!=NULL)
    {
        inOrder(t->lchild);
        printf("%d ",t->data);
        inOrder(t->rchild);
    }
}

int main() {
while(1)
{
    int key,ch;
    printf("\nChoice : \n1. CreateTree : \n2. InsertTree : \n3. SearchTree : \n4. InOrder : \nChoose your option : ");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            printf("\nEnter Value to Add  : ");
            scanf("%d",&key);
            insertCreateBinaryTree(key);
            inOrder(root);
            break;
        case 2:
            printf("\nEnter Value to insert  : ");
            scanf("%d",&key);
            insertCreateBinaryTree(key);
            inOrder(root);
            break;

        case 3:
            printf("\nEnter Value to search  : ");
            scanf("%d",&key);
            struct node * retAddress = searching(key);
            if(retAddress!=NULL)
                printf("%d is Found",retAddress->data);
            else
                printf("%d is not Found",key);
            break;
        case 4:
            inOrder(root);
            break;

        default:
            inOrder(root);
            exit(0);
    }
}
    return 0;
}
