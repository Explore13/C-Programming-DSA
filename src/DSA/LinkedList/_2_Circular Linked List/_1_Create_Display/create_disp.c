// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

void createLL()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
    }
    else
    {
        last->next=newNode;
        last=newNode;
    }
    newNode->next=first;
}

int length()
{
    struct node *p=first;
    int len=0;
    if(p!=NULL)
    {
        do
        {
            len++;
            p=p->next;
        }while(p!=first);
    }
    return len;
}
void display()
{
    struct node *p=first;
    if(p==NULL)
    {
        printf("\nNo Linked list is there");
        return;
    }
    printf("\n\n");
    do {
        printf("| %d | -> ",p->data);
        p=p->next;
    } while (p!=first);
}

void dispUsingLength()
{
    struct node *p=first;
    int len=length();
    if(len==0)
    {
        printf("\nNo Linked List is there\n");
        return;
    }
    int i=0;
    printf("\n\n");
    while (i<=len)
    {
        printf("| %d | -> ",p->data);
        p=p->next;
        i++;
    }
}

void insertAtBeginning()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        newNode->next=first;
        return;
    }
    newNode->next=first;
    first=newNode;
    last->next=newNode;
}

void insertAtLast()
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        newNode->next=first;
        return;
    }
    last->next=newNode;
    last=newNode;
    newNode->next=first;
}

void insertAtPos()
{
    struct node *newNode=(struct node *) malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        newNode->next=first;
        return;
    }

    int pos;
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    int len=length();
    if(pos==0)
    {
        newNode->next=first;
        first=newNode;
        last->next=first;
    }
    else if(pos>=len)
    {
        last->next=newNode;
        newNode->next=first;
        last=newNode;
    }
    else if(pos<len)
    {
        struct node *p=first;
        int i=0;
        while(i<pos-1)
        {
            p=p->next;
            i++;
        }
        newNode->next=p->next;
        p->next=newNode;
    }

}
void deleteFromFirst()
{
    if(length()==0)
    {
        printf("\nNo Delete Operation\n");
        return;
    }
    if(length()==1)
    {
        free(first);
        first=last=NULL;
        return;
    }
    struct node *temp=first;
    first=first->next;
    last->next=first;
    free(temp);
}

void deleteFromLast()
{
    if(length()==0)
    {
        printf("\nNo Delete Operation\n");
        return;
    }
    if(length()==1)
    {
        free(first);
        first=last=NULL;
        return;
    }
    struct node *temp=first;
    do
    {
        temp=temp->next;
    }while(temp->next->next!=first);
    temp->next=last->next;
    free(last);
    last=temp;
}

void deleteFromPos()
{
    if(first==NULL)
    {
        printf("\nNo Delete Operation\n");
        return;
    }
    if(length()==1)
    {
        free(first);
        first=last=NULL;
        return;
    }
    int pos,len=length();
    struct node *temp=first;
    printf("\nEnter Position: ");
    scanf("%d",&pos);
    if(pos==1)
    {
       first=first->next;
       last->next=first;
        free(temp);
    }
    else if(pos>=len)
    {
        do
        {
            temp=temp->next;
        }while(temp->next->next!=first);
        temp->next=last->next;
        free(last);
        last=temp;
    }
    else
    {
        int i=0;
        struct node *q=NULL;
        while(i<pos-1)
        {
            q=temp;
            temp=temp->next;
            i++;
        }
        q->next=temp->next;
        free(temp);
    }
}
int main() {
while(1)
{
    int n;
    printf("\n\tChoose an Option : \n\t1. Create : \n\t2. Display : \n\t3. Length : \n\t4. Insert @ Beginning : \n\t5. Insert @ End : \n\t6. Insert @ Position : \n\t7. Delete 1st Node : \n\t8. Delete Last Node : \n\t9. Delete any node : \n\t");
    scanf("%d",&n);
    switch (n) {
        case 1:
            createLL();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;
        case 2:
            display();
            dispUsingLength();
            break;
        case 3:
            printf("\nLength = %d",length());
            break;
        case 4:
            insertAtBeginning();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;
        case 5:
            insertAtLast();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;
        case 6:
            insertAtPos();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;
        case 7:
            deleteFromFirst();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;
        case 8:
            deleteFromLast();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;

        case 9:
            deleteFromPos();
            printf("\nLength = %d",length());
            display();
            dispUsingLength();
            break;
        default:
            display();
            exit(0);
    }
}
}
