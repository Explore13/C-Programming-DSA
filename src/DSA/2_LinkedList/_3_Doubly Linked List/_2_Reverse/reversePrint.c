// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
} *first=NULL,*last=NULL;

void createLL()
{
    struct node *newNode=(struct node *) malloc(sizeof(struct node));
    newNode->prev=newNode->next=NULL;
    printf("\nEnter Data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    newNode->prev=last;
    last->next=newNode;
    last=newNode;
}

void display()
{
    struct node *p=first;
    if(first==NULL)
    {
        printf("\nNo Linked List is there");
        return;
    }
    printf("\n\n");
    while(p!=NULL)
    {
        printf("| %d | -> ",p->data);
        p=p->next;
    }
}


void reverse()
{
    struct node *p=last;
    if(last==NULL)
    {
        printf("\nNo Linked List is there");
        return;
    }
    printf("\n\n");
    while(p!=NULL)
    {
        printf("| %d | -> ",p->data);
        p=p->prev;
    }
}
int main() {

    while(1)
    {
        int n;
        printf("\nChoice : \n\t1. Create LL : \n\t2. Display LL : \n\t3. Reverse LL : \n");
        scanf("%d",&n);
        switch (n) {
            case 1:
                createLL();
                display();
                reverse();
                break;

            case 2:
                display();
                reverse();
                break;
            case 3:
                reverse();
                break;
            default:
                display();
                reverse();
                exit(0);
        }
    }

    return 0;
}
