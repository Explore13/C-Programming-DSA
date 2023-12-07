// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *next;
} *first=NULL,*last=NULL,*second=NULL,*sLast=NULL;

void createFirstLL()
{
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
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

int length()
{
    struct node *length=first;
    int len=0;
    while(length!=NULL)
    {
        len++;
        length=length->next;
    }
    return len;
}

void sortLL()
{
    struct node *p=first,*q=first->next,*r=NULL;
    if(first==NULL)
    {
        printf("\nNothing Happened");
        return;
    }
    int len=length(),i=1;
    while(i<=len-1)
    {
        while(q!=NULL)
        {

            if(p->data<q->data)
            {
                p->next=q->next;
                q->next=p;
                if(p==first)
                {
                    first=q;
                }
                q=p->next;
            }
//            else if(p->data==q->data)
//            {
//              p=p->next;
//              q=q->next;
//            }
            else
            {
                p=q;
                q=q->next;
            }
        }

        p=first;
        q=first->next;
        i++;
    }
}

int main() {
    while(1) {
        int n;
        printf("\n\t1.Create 1st Linked List : \n\t2.Create 2nd Linked List : \n\t3.Sorting: \n\t4. Display : \n\t");
        scanf("%d", &n);
        switch (n) {
            case 1:
                createFirstLL();
                display(first);
                display(second);
                break;
            case 3:
                sortLL();
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
