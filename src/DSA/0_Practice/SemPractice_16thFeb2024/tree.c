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

int count(struct node *t) {
    int x, y;
    if (t != NULL) {
        x = count(t->lchild);
        y = count(t->rchild);
        return x + y + 1;

    }
    return 0;
}
int height(struct node *p)
{
    

    return 0;
}
int main() {
    createTree();
    printf("\nPreOrder : ");
    preOrder(root);
//    printf("\nDegTwo :  %d", degTwoNode(root));
//    printf("\nDegOne :  %d", degOneNode(root));
//    printf("\nLeafNodes :  %d", leafNode(root));
//    printf("\nNonLeafNodes :  %d", nonLeafNode(root));
    return 0;
}
