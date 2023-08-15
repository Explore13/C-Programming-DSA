// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

void EnQueue()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("\nEnter data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    last->next=newNode;
    last=newNode;
}
int length()
{
    struct node *p=first;
    int len=0;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }
    return len;
}
void DeQueue()
{
    if(first==NULL)
    {
        return;
    }
    struct node *temp=first;
    printf("\n%d is Popped up\n",temp->data);
    first=first->next;
    free(temp);

}

void display()
{
    if(first==NULL)
    {
        printf("\nQueue UnderFlow");
        return;
    }
    struct node *p=first;
    printf("\nThe Queue : \n");
    while(p!=NULL)
    {
        printf("| %d | -> ",p->data);
        p=p->next;
    }
}

int main() {

    while(1)
    {
        int n;
        printf("\n\nChoose : \n\t1. EnQueue : \n\t2. DeQueue : \n\t3. Display : \n\t");
        scanf("%d",&n);
        switch (n) {
            case 1:
                EnQueue();
                printf("\nQueue Length : %d\n",length());
                display();
                break;
            case 2:
                DeQueue();
                printf("\nQueue Length : %d\n",length());
                display();
                break;
            case 3:
                printf("\nQueue Length : %d\n",length());
                display();
                break;
            default:
                display();
                exit(0);
        }
    }
    return 0;
}
