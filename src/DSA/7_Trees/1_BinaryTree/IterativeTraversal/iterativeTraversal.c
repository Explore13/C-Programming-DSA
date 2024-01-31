// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include "NewHeader.h"
#include "StackHeader.h"

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


/* Iterative PreOrder */

void preOrder(struct node *t)
{
    struct stack st;
    st.size=100;
    st.top=-1;
    st.newStack=(struct node**)malloc(sizeof(struct node *)*(st.size));
    while (t!=NULL || !isEmptyStack(st))
    {
        if(t!=NULL)
        {
            printf("%d ",t->data);
            push(&st,t);
            t=t->lchild;
        }
        else
        {
            t = pop(&st);
            t=t->rchild;
        }
    }
}

/* Iterative PreOrder */

void inOrder(struct node *t)
{
    struct stack st;
    st.size=100;
    st.top=-1;
    st.newStack=(struct node**)malloc(sizeof(struct node *)*(st.size));
    while (t!=NULL || !isEmptyStack(st))
    {
        if(t!=NULL)
        {
            push(&st,t);
            t=t->lchild;
        }
        else
        {
            t = pop(&st);
            printf("%d ",t->data);
            t=t->rchild;
        }
    }
}

/* By ChatGPT */
void postOrder(struct node *t) {
    struct stack st;
    st.size = 100;
    st.top = -1;
    st.newStack = (struct node **)malloc(sizeof(struct node *) * st.size);

    struct node *lastVisited = NULL;

    do {
        while (t != NULL) {
            push(&st, t);
            t = t->lchild;
        }

        while (t == NULL && !isEmptyStack(st)) {
            t = (struct node *)pop(&st);
            if (t->rchild == NULL || t->rchild == lastVisited) {
                printf("%d ", t->data);
                lastVisited = t;
                t = NULL;  // Move to the next iteration of the outer loop
            } else {
                push(&st, t);
                t = t->rchild;
            }
        }
    } while (!isEmptyStack(st));
}

int main() {
    createTree();

    printf("\nPreOrder : ");
    preOrder(root);
    printf("\nInOrder : ");
    inOrder(root);
    printf("\nPostOrder : ");
    postOrder(root);


    return 0;
}
