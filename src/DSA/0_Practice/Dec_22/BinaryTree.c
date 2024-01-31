// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root=NULL;

struct queue
{
    int size;
    int front;
    int back;
    struct node **newQ;
};

void enQueue(struct queue *q, struct node *value)
{
if((q->back + 1)%(q->size)==(q->front))
    return;
}


int main() {

    return 0;
}
