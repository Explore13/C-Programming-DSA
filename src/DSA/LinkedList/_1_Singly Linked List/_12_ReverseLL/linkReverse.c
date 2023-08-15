// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *next;
} *first=NULL,*last=NULL;

void createLL()
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


void display()
{
    struct node *p=first;

    if(p==NULL)
    {
        printf("\nNo Linked List is there\n");
        return;
    }
    while(p!=NULL)
    {
        printf("| %d | -> ",p->data);
        p=p->next;
    }

}

//int length()
//{
//    struct node *p=first;
//    int count=0;
//    while(p!=NULL)
//    {
//        count++;
//        p=p->next;
//    }
//    return count;
//}

void reverseLL()
{
    struct node *p=first,*q=NULL,*r=NULL;
    if(p==NULL)
    {
        printf("\nNo Linked list is there");
        return;
    }
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    last=first;
    first=q;

}

int main() {
    while(1) {
        int n;
        printf("\n\t1.Create Linked List : \n\t2.Reverse : \n\t3. Display : \n\t");
        scanf("%d", &n);
        switch (n) {
            case 1:
                createLL();
                display();
                break;
            case 2:
                reverseLL();
                display();
                break;
            case 3:
                display();
                break;
            default:
                display();
                exit(0);

        }
    }
}
