// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

void createLL()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->prev=newNode->next=NULL;
    printf("\nEnter Data :");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    last->next=newNode;
    newNode->prev=last;
    last=newNode;
}

int length()
{
    struct node *temp=last;
    int len=0;
    if(first!=NULL)
    {
        while(temp!=NULL)
        {
            len++;
            temp=temp->prev;
        }
    }
    return len;
}
void insertAtBeginning()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->prev=newNode->next=NULL;
    printf("\nEnter Data :");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    first->prev=newNode;
    newNode->next=first;
    first=newNode;

}

void insertAtLast()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->prev=newNode->next=NULL;
    printf("\nEnter Data :");
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

void insertAtPos()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->prev=newNode->next=NULL;
    printf("\nEnter Data :");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    int pos,len=length();
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    if(pos==0)
    {
        first->prev=newNode;
        newNode->next=first;
        first=newNode;
    }
    else if(pos>=len)
    {
        newNode->prev=last;
        last->next=newNode;
        last=newNode;
    }
    else if(pos<len)
    {
        struct node *temp=first;
        int i=0;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newNode->prev=temp;
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
    }
}

void deleteFromFirst()
{
    struct node *p=first;
    if(first==NULL)
    {
        printf("\nNo deletion happened");
        return;
    }
    if(first->next==NULL)
    {
        free(first);
        first=last=NULL;
        return;
    }
    first=first->next;
    first->prev=NULL;
    free(p);
}

void deleteFromLast()
{
    struct node *p=first;
    if(first==NULL)
    {
        printf("\nNo deletion happened");
        return;
    }
    if(length()==1)
    {
        free(first);
        first=last=NULL;
        return;
    }
    struct node *q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    free(p);
    last=q;
}

void deleteFromPos()
{
    struct node *p=first;
    if(first==NULL)
    {
        printf("\nNo deletion happened");
        return;
    }
    if(length()==1)
    {
        free(first);
        first=last=NULL;
        return;
    }
    int pos,len=length();
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    if(pos==1)
    {
        first->next->prev=NULL;
        first=first->next;
        free(p);
    }
    else if(pos>=len)
    {
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        p->next=NULL;
        free(last);
        last=p;
    }
    else if(pos<len)
    {
        int  i=0;
        struct node *q=NULL;
        while(i<pos-1)
        {
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        p->next->prev=p->prev;
        free(p);

    }
}
void display()
{
    struct node *p=first;
    if(first==NULL)
    {
        printf("\nNo Linked List");
        return;
    }
    while(p!=NULL)
    {
        printf("| %d | <-> ",p->data);
        p=p->next;
    }
}

void reverse()
{
    struct node *p=first,*q=NULL,*r=NULL;
    if(first==NULL)
    {
        return;
    }
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        q->prev=p;
    }
    last=first;
    first=q;
}

int main() {

    while(1)
    {
        int choice;
        printf("\n\n\tChoice : \n\t1. Create LL : \n\t2. Display : \n\t3. Insert @Beginning : \n\t"
               "4. Insert @Last : \n\t5. Insert @Position : \n\t6. Length of LL : \n\t"
               "7. Delete from First : \n\t8. Delete from Last : \n\t9. Delete from Position : \n\t10. Reverse LL : \n\t");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                createLL();
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 2:
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 3:
                insertAtBeginning();
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 4:
                insertAtLast();
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 5:
                insertAtPos();
                printf("\nLength of LL : %d\n\n",length());
                display();

                break;
            case 6:
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 7:
                deleteFromFirst();
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 8:
                deleteFromLast();
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 9:
                deleteFromPos();
                printf("\nLength of LL : %d\n\n",length());
                display();
                break;
            case 10:
                display();
                printf("\n");
                reverse();
                display();
                break;
            default:
                display();
                exit(0);
        }
    }
}
