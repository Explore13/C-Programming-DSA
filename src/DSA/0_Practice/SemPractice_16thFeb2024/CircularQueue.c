// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct queue {
    int size;
    int front;
    int back;
    int *NewQueue;
};


void enQueue(struct queue *q) {

    // -1 0 1 2 3 4 ---- front : 3 back : 2 then full---- back+1 = 3 % size == front -> full
    //front : 4 back : 0 back+1 % size =1 != front -- not full
    //front -1 and back -1 then   empty
    if ((q->back + 1) % q->size == q->front) {
        printf("\nQueue is full");
        return;
    }

    if (q->front == -1)
        q->front = 0;

    q->back = (q->back + 1) % q->size;
    printf("\nEnter the value to add : ");
    scanf("%d", &q->NewQueue[q->back]);
}

void deQueue(struct queue *q) {
    if (q->front == -1) {
        printf("\nQueue is empty");
        return;
    }


    printf("\n%d is deleted", (q->NewQueue)[q->front]);
    if (q->front == q->back)
        q->front = q->back = -1;
    else
        q->front = (q->front + 1) % q->size;

}

void display(struct queue q)
{
    if(q.front==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nThe Queue : ");
        int i;
        for (i=q.front; i !=q.back ; i = (i+1)%q.size) {
            printf("%d ",q.NewQueue[i]);
        }
        printf("%d",q.NewQueue[i]);
        printf("\nThe Front -> %d ",(q.NewQueue)[q.front]);
        printf("\nThe Rear -> %d ",(q.NewQueue)[q.back]);
    }
}
int main() {
    struct queue Queue;
    printf("\nEnter Stack Size : ");
    scanf("%d",&Queue.size);
    Queue.front=Queue.back=-1;
    Queue.NewQueue=(int *) malloc(sizeof(int)*Queue.size);


    while(1)
    {
        int ch;
        printf("\n1. Push \n2. Pop \n3. Display \n4. IsEmpty \n5.IsFull \n6. PeekValue \n\nEnter the Choice : ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                enQueue(&Queue);
                display(Queue);
                break;
            case 2:
                deQueue(&Queue);
                display(Queue);
                break;
            case 3:
                display(Queue);
                break;

            default:
                display(Queue);
                exit(0);
        }
    }
    return 0;
}
