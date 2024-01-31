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

/* Leaf Nodes Count */

int leafNode(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x= leafNode(p->lchild);
        y= leafNode(p->rchild);

        if(!p->lchild && !p->rchild)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

/* Non-Leaf Node */

int nonLeafNode(struct node *p)
{
    int x,y;
    if(p!=NULL){
        x= nonLeafNode(p->lchild);
        y= nonLeafNode(p->rchild);
        if(p->lchild || p->rchild)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

/* Deg : 2 Node */
int degTwoNode(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x= degTwoNode(p->lchild);
        y= degTwoNode(p->rchild);

        if(p->lchild && p->rchild)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

/* Deg :1 Node */
int degOneNode(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x= degOneNode(p->lchild);
        y= degOneNode(p->rchild);

        if(p->lchild!=NULL ^ p->rchild!=NULL)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

int main() {
createTree();
    printf("\nPreOrder : ");
    preOrder(root);
    printf("\nDegTwo :  %d", degTwoNode(root));
    printf("\nDegOne :  %d", degOneNode(root));
    printf("\nLeafNodes :  %d", leafNode(root));
    printf("\nNonLeafNodes :  %d", nonLeafNode(root));
    return 0;
}
