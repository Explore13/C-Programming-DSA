// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Queue{
    int front;
    int rear;
    int size;
    int *newQ;
};
void enQueue(struct Queue *q)
{
//    if(q->front==0&&q->rear==q->size-1 || q->front==q->rear+1)
    if((q->rear+1)%(q->size)==(q->front))
    {
        printf("\nQueue is Full");
    }
    else
    {
        if(q->front==-1)
            q->front=0;
        (q->rear)=((q->rear)+1)%(q->size);
        printf("\nEnter element : ");
        scanf("%d",&(q->newQ)[q->rear]);
    }
}

void deQueue(struct Queue *q)
{
    if((q->front)==-1)
        printf("\nQueue is Empty");
    else
    {
        printf("\n%d is deleted",(q->newQ)[q->front]);
        if((q->front)==(q->rear))
            q->front=q->rear=-1;
        else
        (q->front)=(q->front+1)%(q->size);
    }
}
void display(struct Queue *q)
{
    if((q->front)==-1)
        printf("\nQueue is Empty");
    else
    {
        printf("\nThe Queue : \n");
        int i;
        for (i = (q->front); i !=(q->rear); i=(i+1)%(q->size)) {
            printf("%d ",(q->newQ)[i]);
        }
        printf("%d ",(q->newQ)[i]);
        printf("\nThe Front -> %d ",(q->newQ)[q->front]);
        printf("\nThe Rear -> %d ",(q->newQ)[q->rear]);
    }
}
int main() {
    struct Queue queue;
    printf("\nEnter Size : ");
    scanf("%d",&queue.size);
    queue.front=queue.rear=-1;
    (queue.newQ)=(int *) malloc(sizeof (int)*(queue.size));
    while (1)
    {
        int n;
        printf("\nChoice : \n1. EnQueue 2. DeQueue 3. Display 4. isFull 5. isEmpty\n");
        scanf("%d",&n);
        switch (n) {
            case 1:
                enQueue(&queue);
                display(&queue);
                break;
            case 2:
                deQueue(&queue);
                display(&queue);
                break;
            case 3:
                display(&queue);
                break;
            default:
                display(&queue);
                free(queue.newQ);
                exit(0);
        }
    }
    return 0;
}
