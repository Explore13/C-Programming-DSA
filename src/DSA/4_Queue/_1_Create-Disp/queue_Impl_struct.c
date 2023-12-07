// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Queue{
    int size;
    int front;
    int back;
    int *newQ;
};
int isFull(struct Queue *q)
{
    if((q->back)==(q->size)-1)
        return 1;
    else
        return 0;
}
int isEmpty(struct Queue *q)
{
    if(q->back==-1||(q->front>q->back))
        return 1;
    else
        return 0;
}
void enQueue(struct Queue *q){
    if((q->back)==(q->size)-1)
    {
        printf("\nQueue is full");
        return;
    }
    (q->back)++;
    if((q->front)==-1)
        (q->front)++;
    printf("\nEnter Element : ");
    scanf("%d",&(q->newQ)[(q->back)]);
}
void deQueue(struct Queue *q)
{
    if((q->back)==-1)
    {
        printf("\nEmpty Queue");
        return;
    }
    printf("\n%d is deleted",(q->newQ)[q->front++]);
    if (q->front>q->back)
        q->front=q->back=-1;

}
void display(struct Queue *q)
{
    if(q->back==-1)
        printf("\nEmpty Queue");
    else
    {
        printf("\nThe Queue : \n");
        for (int i = (q->front); i <=(q->back) ; ++i) {
            printf("%d ",(q->newQ)[i]);
        }
    }
}
int main() {
struct Queue queue;
    printf("\nEnter size : ");
    scanf("%d",&queue.size);
    queue.front=queue.back=-1;
    queue.newQ=(int *) malloc(sizeof(int)*queue.size);
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
            case 4:
                printf("\nisFull : %d", isFull(&queue));
                break;
            case 5:
                printf("\nisEmpty : %d ", isEmpty(&queue));
                break;
            default:
                display(&queue);
                free(queue.newQ);
                exit(0);
        }
    }
    return 0;
}
