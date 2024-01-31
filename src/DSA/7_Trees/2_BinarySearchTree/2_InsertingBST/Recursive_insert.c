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
    if (root == NULL) {
        (root) = (struct node *) malloc(sizeof(struct node));
        root->lchild = root->rchild = NULL;
        printf("\nEnter data : ");
        scanf("%d", &root->data);
    }
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

/* Recursive Insert */
struct node *insertKey(struct node *t, int value) {
    if (t == NULL) {
        struct node *p = (struct node *) malloc(sizeof(struct node));
        p->lchild = p->rchild = NULL;
        p->data = value;
        return p;
    }
    if (value < t->data)
        t->lchild = insertKey(t->lchild, value);
    else if (value > t->data)
        t->rchild = insertKey(t->rchild, value);
    return t;
}


int main() {
    while (1) {
        int ch, key;
        printf("\nChoice : \n1. CreateTree : \n2. InsertTree : \n 3. InOrder : \nChoose your option : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                createTree();
                inOrder(root);
                break;
            case 2:
                printf("\nEnter Key to Insert : ");
                scanf("%d", &key);
                if (root == NULL)
                    root = insertKey(root, key);
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
