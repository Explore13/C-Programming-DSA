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
void checkSort()
{
    struct node *p=first;

    if(p==NULL)
    {
        printf("\nNo Linked List is There\n");
        return;
    }
    while(p->next!=NULL)
    {
        if(p->data>((p->next)->data))
        {
            printf("\nNot Sorted\n");
            display();
            return;
        }

        p=p->next;

    }
    printf("\nSorted Linked List\n");
    display();
}

int main() {
    while(1)
    {
        int n;
        printf("\n\t1.Create Linked List\n\t2.Sort Checking : \n\t");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
                createLL();
                display();
                break;
            case 2:
                checkSort();
                break;

            case 0:
                checkSort();
                display();
                exit(0);

        }
    }
    return 0;
}
