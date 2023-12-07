//
// Created by surya on 07-12-2023.
//

#ifndef C_PROGRAMMING_BINARY_H
#define C_PROGRAMMING_BINARY_H

#define MAX_SIZE 100
struct node {
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

struct queue {
    int size;
    int front;
    int back;
    struct node **newQ;
};

void enqueue(struct queue *q, struct node *value) {
    if ((q->front) == (q->back + 1) % (q->size)) {
        printf("\nQueue is full");
        return;
    }

    if (q->front == -1)
        q->front = 0;

    q->back = (q->back + 1) % (q->size);
    (q->newQ)[q->back] = value;
}

struct node *dequeue(struct queue *q) {
    struct node *x = NULL;
    if ((q->front) == -1) {
        printf("\nQueue is Empty");
    } else {
        x = (q->newQ)[q->front];
        if ((q->front) == (q->back))
            q->front = q->back = -1;
        else
            (q->front) = (q->front + 1) % (q->size);
    }
    return x;
}

int isEmpty(struct queue q) {
    return (q.front) == -1;
}

void createTree() {
    struct node *p, *t;
    int data;
    struct queue Queue;
    Queue.size = MAX_SIZE;
    Queue.front = Queue.back = -1;
    (Queue.newQ) = (struct node **) malloc(sizeof(struct node *) * (Queue.size));

    (root) = (struct node *) malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d", &root->data);
    root->lchild = root->rchild = NULL;
    enqueue(&Queue, root);

    while (!isEmpty(Queue)) {
        p = dequeue(&Queue);
        printf("\nEnter Left Child of %d : ", p->data);
        scanf("%d", &data);
        if (data != -1) {
            t = (struct node *) malloc(sizeof(struct node));
            t->data = data;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&Queue, t);
        }
        printf("\nEnter Right Child of %d : ", p->data);
        scanf("%d", &data);
        if (data != -1) {
            t = (struct node *) malloc(sizeof(struct node));
            t->data = data;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&Queue, t);
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

#endif //C_PROGRAMMING_BINARY_H
