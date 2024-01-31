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


void inOrder(struct node *t) {
    if (t != NULL) {
        inOrder(t->lchild);
        printf("%d ", t->data);
        inOrder(t->rchild);
    }
}

/* Recursive Searching */
struct node * RSearch(struct node *t,int key)
{
    if(t==NULL)
        return NULL;

    if(t->data==key)
        return t;
    return (key>t->data)? RSearch(t->rchild,key): RSearch(t->lchild,key);
}
int main() {
    createTree();
    while(1)
    {
        int key;
        printf("\nSearch a Value : ");
        scanf("%d",&key);
        if(key==0)
            exit(0);
        else {
            if (RSearch(root, key) == NULL)
                printf("\nNot Found");
            else
                printf("\nFound");
            printf("\nInOrder : ");
            inOrder(root);
        }
    }

    return 0;
}
