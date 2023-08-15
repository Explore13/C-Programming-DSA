// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *first=0, *last=0;

void linkedList()
{
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("Enter a value : \n");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    last->next=newNode;
    last=newNode;
}

void improveSearching(struct node *p,int key)
{
    struct node *q=NULL;
    while(p!=NULL)
    {
        if(p->data==key&&q!=NULL)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            break;
        }
        q=p;
        p=p->next;
    }
}


void display()
{
    struct node *temp = first;
    while(temp!=0)
    {
        printf("| %d | -> ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    printf("\n");
    printf("\n");
}

void memoryFree(struct node *p)
{
    struct node *q=p;
    while(q!=NULL)
    {
        q=p->next;
        free(p);
        p=q;
    }
}
int main() {
    int n=1;
    while (n)
    {
        linkedList();
        printf("\n\n\nContinue? \n");
        scanf("%d",&n);
    }
    display();
    improveSearching(first,12);
    display();
    memoryFree(first);
    return 0;
}
