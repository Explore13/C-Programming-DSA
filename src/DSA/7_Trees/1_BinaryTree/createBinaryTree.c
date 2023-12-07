// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include "Header.h"
void createTree() {
    struct node *p, *child;
    int value;
    /* Queue Creation */
    struct queue Queue;
    Queue.size = 100;
    Queue.front = Queue.back = -1;
    (Queue.newQ) = (struct node **) malloc(sizeof(struct node *) * Queue.size);

    /* Tree Creation */
    (root) = (struct node *) malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d", &(root->data));
    root->lchild = root->rchild = NULL;
    enQueue(&Queue, root);

    while (!isEmpty(Queue)) {
        p = deQueue(&Queue);
        printf("\nEnter Left Child Data of %d: ", p->data);
        scanf("%d", &value);
        if (value != -1) {
            child = (struct node *) malloc(sizeof(struct node));
            child->data = value;
            child->lchild = child->rchild = NULL;
            p->lchild = child;
            enQueue(&Queue, child);
        }

        printf("\nEnter Right Child Data of %d: ", p->data);
        scanf("%d", &value);
        if (value != -1) {
            child = (struct node *) malloc(sizeof(struct node));
            child->data = value;
            child->lchild = child->rchild = NULL;
            p->rchild = child;
            enQueue(&Queue, child);
        }

    }

}

void preOrder(struct node *p) {
    if (p != NULL) {
        printf("%d ", p->data);
        preOrder(p->lchild);
        preOrder(p->rchild);
    }

}

void freeTree(struct node *p)
{
    if(p)
    {
        freeTree(p->lchild);
        freeTree(p->rchild);
        free(p);
    }
}

int main() {
    createTree();
    printf("\nPreOrder Traversal : \n");
    preOrder(root);
    freeTree(root);
    return 0;
}
