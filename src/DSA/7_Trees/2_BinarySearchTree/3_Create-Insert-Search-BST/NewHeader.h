
#ifndef C_PROGRAMMING_NEWHEADER_H
#define C_PROGRAMMING_NEWHEADER_H

struct queue {
    int size;
    int front;
    int back;
    struct node **newQ;
};

void enQueue(struct queue *q, struct node *value) {
    if ((q->back + 1) % q->size == (q->front)) {
        printf("\nQueue is full");
        return;
    }

    if ((q->front) == -1)
        (q->front) = 0;
    (q->back) = (q->back + 1) % (q->size);
    (q->newQ)[q->back] = value;
}

struct node *deQueue(struct queue *q) {
    struct node *x = NULL ;
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
    return q.front == -1;
}
#endif //C_PROGRAMMING_NEWHEADER_H

