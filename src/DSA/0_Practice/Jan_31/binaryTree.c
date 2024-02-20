// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<stdlib.h>


struct node {
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;


struct Queue {
    int size;
    int front;
    int back;
    struct node **newQ;
};


void enqueue(struct Queue *queue, struct node *data) {
    if (((queue->back) + 1) % (queue->size) == (queue->front)) {
        return;
    } else {

        if (queue->front == -1)
            ++(queue->front);

        (queue->back) = (queue->back + 1) % (queue->size);

        queue->newQ[queue->back] = data;
    }
}

struct node *dequeue(struct Queue *queue) {
    struct node *address = NULL;

    if ((queue->front) == -1) {
        return NULL;
    } else {
        address = queue->newQ[(queue->front)];
        if ((queue->front) > (queue->back))
            queue->front = queue->back = -1;
        else
            (queue->front) = (queue->front + 1) % (queue->size);
        return address;
    }
}

int isEmpty(struct Queue queue) {
    return (queue.front == -1) ? 1 : 0;
}


void createTree() {

    struct node *child, *t;
    int data;

    struct Queue queue;

    queue.size = 100;

    queue.newQ = (struct node **) malloc(sizeof(struct node *) * (queue.size));

    queue.front = queue.back = -1;

    root = (struct node *) malloc(sizeof(struct node *));

    printf("\nEnter Root : ");
    scanf("%d", &data);
    root->data = data;
    root->lchild = root->rchild = NULL;

    enqueue(&queue, root);


    printf("ok\n");

    while (!isEmpty(queue)) {
        t = dequeue(&queue);

        printf("\nEnter the Left Child of %d : ", t->data);
        scanf("%d", &data);

        if (data != -1) {
            child = (struct node *) malloc(sizeof(struct node *));
            child->lchild = child->rchild = NULL;
            child->data = data;
            t->lchild = child;
            enqueue(&queue, child);
        }

        printf("\nEnter the Right Child of %d : ", t->data);
        scanf("%d", &data);

        if (data != -1) {
            child = (struct node *) malloc(sizeof(struct node *));
            child->lchild = child->rchild = NULL;
            child->data = data;
            t->rchild = child;
            enqueue(&queue, child);
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

void inOrder(struct node *t) {
    if (t != NULL) {
        preOrder(t->lchild);
        printf("%d ", t->data);
        preOrder(t->rchild);
    }
}

void postOrder(struct node *t) {
    if (t != NULL) {
        preOrder(t->lchild);
        preOrder(t->rchild);
        printf("%d ", t->data);
    }
}

void freeTree(struct node *p) {
    if (p != NULL) {
        freeTree(p->lchild);
        freeTree(p->rchild);
        free(p);
    }
}

int main() {


    createTree();
    printf("\nPre Order : ");
    preOrder(root);
    printf("\nIn Order : ");
    inOrder(root);
    printf("\nPost Order : ");
    postOrder(root);

    freeTree(root);
    return 0;
}
