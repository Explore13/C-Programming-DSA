// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *next;
} *first=NULL,*fLast=NULL,*second=NULL,*sLast=NULL;

void createFirstLL()
{
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("\nEnter data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=fLast=newNode;
        return;
    }
    fLast->next=newNode;
    fLast=newNode;
}

void createSecondLL()
{
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("\nEnter data : ");
    scanf("%d",&newNode->data);
    if(second==NULL)
    {
        second=sLast=newNode;
        return;
    }
    sLast->next=newNode;
    sLast=newNode;
}

void display( struct node *p)
{

    if(p==NULL)
    {
        printf("\nNo Linked List is there\n");
        return;
    }
    printf("\n\n");
    while(p!=NULL)
    {
        printf("| %d | -> ",p->data);
        p=p->next;
    }

}

void concatLL()
{
    if(first==NULL||second==NULL)
    {
        printf("\nNo concat occurred\n");
        return;
    }
    fLast->next=second;
    fLast=sLast;
    second=sLast=NULL;

}


int main() {
    while(1) {
        int n;
        printf("\n\t1.Create 1st Linked List : \n\t2.Create 2nd Linked List : \n\t3.Concat : \n\t4. Display : \n\t");
        scanf("%d", &n);
        switch (n) {
            case 1:
                createFirstLL();
                display(first);
                display(second);
                break;
            case 2:
                createSecondLL();
                display(first);
                display(second);
                break;
            case 3:
                concatLL();
                display(first);
                display(second);
                break;
            case 4:
                display(first);
                display(second);
                break;
            default:
                display(first);
                display(second);
                exit(0);

        }
    }
}
