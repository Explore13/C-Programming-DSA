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

void mergeLL()
{
    struct node *third=NULL,*temp=NULL;
    if(first==NULL||second==NULL)
    {
        printf("\nNo merging happened\n");
        return;
    }
    if(first->data<=second->data)
    {
        third=temp=first;
        first=first->next;
        temp->next=NULL;
    }
    else
    {
        third=temp=second;
        second=second->next;
        temp->next=NULL;
    }

    while(first!=NULL&&second!=NULL)
    {
        if(first->data<=second->data)
        {
            temp->next=first;
            temp=first;
            first=first->next;
            temp->next=NULL;
        }
        else
        {
            temp->next=second;
            temp=second;
            second=second->next;
            temp->next=NULL;
        }
    }
    if(first!=NULL)
    {
        temp->next=first;
    }
    else
    {
        temp->next=second;
    }
    first=fLast=third;
    second=sLast=NULL;
    while(fLast->next!=NULL)
    {
        fLast= fLast->next;
    }

}


int main() {
    while(1) {
        int n;
        printf("\n\t1.Create 1st Linked List : \n\t2.Create 2nd Linked List : \n\t3.Merge : \n\t4. Display : \n\t");
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
                mergeLL();
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
