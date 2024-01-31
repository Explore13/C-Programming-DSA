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

void createTree() {
    struct node *p, *t;
    int x;
    struct queue Queue;
    Queue.size = 100;
    Queue.front = Queue.back = -1;
    (Queue.newQ) = (struct node **) malloc(sizeof(struct node *) * (Queue.size));
    (root) = (struct node *) malloc(sizeof(struct node));
    root->lchild = root->rchild = NULL;
    printf("\nEnter data : ");
    scanf("%d", &root->data);
    enQueue(&Queue, root);

    while (!isEmpty(Queue)) {
        p = deQueue(&Queue);
        printf("\nEnter left child data of %d : ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (struct node *) malloc(sizeof(struct node));
            t->data = x;
            p->lchild = t;
            t->lchild = t->rchild = NULL;
            enQueue(&Queue, t);
        }
        printf("\nEnter right child data of %d : ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (struct node *) malloc(sizeof(struct node));
            t->data = x;
            p->rchild = t;
            t->lchild = t->rchild = NULL;
            enQueue(&Queue, t);
        }
    }
}


void preOrder(struct node *t) {
    if (t != NULL) {
        printf("%d ", t->data);
        preOrder(t->lchild);
        preOrder(t->rchild);
    }
}


/* Count Nodes Code by Me */

int countNode(struct node *p) {
    int count = 0;
    if (p != NULL) {
        struct queue Queue;
        Queue.size = 100;
        Queue.front = Queue.back = -1;
        (Queue.newQ) = (struct node **) malloc(sizeof(struct node *) * (Queue.size));
        count++;
        enQueue(&Queue, root);
        while (!isEmpty(Queue)) {
            p = deQueue(&Queue);
            if (p->lchild) {
                enQueue(&Queue, p->lchild);
                count++;
            }
            if (p->rchild) {
                enQueue(&Queue, p->rchild);
                count++;
            }
        }
    }
    return count;
}

/* Recursive Function */

int countNodesRecursive(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x= countNodesRecursive(p->lchild);
        y= countNodesRecursive(p->rchild);
        return x+y+1;
    }
    return 0;
}


/* Count the Nodes with Degree : 2 means the node having both the children */
int degreeTwoNodes(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x= degreeTwoNodes(p->lchild);
        y= degreeTwoNodes(p->rchild);
        if(p->lchild && p->rchild)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

/* Data Sum */

int dataSum(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x= dataSum(p->lchild);
        y= dataSum(p->rchild);
        return x+y+p->data;
    }
    return 0;
}

/* Height of a Tree */

int func(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=func(p->lchild);
        y=func(p->rchild);
        if(x>y)
           return x+1;
        else
           return y+1;
    }
    return 0;

    /* This code will return the height of a binary tree */
}



int main() {
    createTree();
    printf("\nPreOrder Traversal : ");
    preOrder(root);
    printf("\n No. of Nodes : %d", countNode(root));
    printf("\n No. of Nodes using Recursion : %d", countNodesRecursive(root));
    printf("\n No. of Nodes having both children : %d", degreeTwoNodes(root));
    printf("\n Data Sum : %d", dataSum(root));
    printf("\n (Height of a Tree) : %d", func(root));

    return 0;
}
