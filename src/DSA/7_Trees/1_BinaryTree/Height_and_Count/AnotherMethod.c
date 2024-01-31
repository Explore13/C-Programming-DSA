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

void postOrder(struct node *p)
{
    if(p!=NULL)
    {
        postOrder(p->lchild);
        postOrder(p->rchild);
        printf("%d ",p->data);
    }
}

void inOrder(struct node *t)
{
    if(t!=NULL)
    {
        inOrder(t->lchild);
        printf("%d ",t->data);
        inOrder(t->rchild);
    }
}
/* Recursive Function */

int countNodes(struct node *p)
{
    if(p==NULL)
        return 0;
    return countNodes(p->lchild)+ countNodes(p->rchild)+1;
}


/* Count the Nodes with Degree : 2 */
int degreeTwoNodes(struct node *p)
{
    if(p==NULL)
        return 0;
    if(p->lchild && p->rchild)
    return degreeTwoNodes(p->lchild)+ degreeTwoNodes(p->rchild)+1;

    return degreeTwoNodes(p->lchild)+ degreeTwoNodes(p->rchild);
}

/* Data Sum */

int dataSum(struct node *p)
{
if(p==NULL)
    return 0;
    return dataSum(p->lchild) + dataSum(p->rchild) + p->data;
}


/* Leaf Nodes Count */

int leafNode(struct node *p)
{
    if(p==NULL)
        return 0;

    if(!p->lchild && !p->rchild)
        return leafNode(p->lchild)+ leafNode(p->rchild)+1;

    return leafNode(p->lchild)+ leafNode(p->rchild);
}

/* Non-Leaf Node */

int nonLeafNode(struct node *p)
{
    if(p==NULL)
        return 0;

    if(p->lchild || p->rchild)
        return nonLeafNode(p->lchild)+ nonLeafNode(p->rchild)+1;

    return nonLeafNode(p->lchild)+ nonLeafNode(p->rchild);
}


/* Deg :1 Node */
int degOneNode(struct node *p)
{
   if(p==NULL)
    return 0;

   if(p->lchild!=NULL ^ p->rchild!=NULL)
       return degOneNode(p->lchild)+ degOneNode(p->rchild)+1;

    return degOneNode(p->lchild)+ degOneNode(p->rchild);
}



int main() {
    createTree();
    printf("\nPreOrder Traversal : ");
    preOrder(root);
    printf("\nTotal Nodes : %d", countNodes(root));
    printf("\nDegTwo Nodes : %d", degreeTwoNodes(root));
    printf("\nData Sum : %d", dataSum(root));
    printf("\nDegOne :  %d", degOneNode(root));
    printf("\nLeafNodes :  %d", leafNode(root));
    printf("\nNonLeafNodes :  %d", nonLeafNode(root));

    return 0;
}
