// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

void push()
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
void pop()
{
    if(first==NULL)
    {
        return;
    }

        struct node *temp=first;
        if(temp->next==NULL)
        {
            printf("\n%d is popped up",last->data);
            free(temp);
            first=last=NULL;
            return;
        }
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        printf("\n%d is popped up",last->data);
        temp->next=NULL;
        free(last);
        last=temp;
    }

void display()
{
    if(first==NULL)
    {
        printf("\nStack UnderFlow");
        return;
    }
    struct node *p=first;
    printf("\nThe Stack : \n");
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
        printf("\n\nChoose : \n\t1. Push : \n\t2. Pop : \n\t3. Display : \n\t");
        scanf("%d",&n);
        switch (n) {
            case 1:
                push();
                printf("\nStack Length : %d\n",length());
                display();
                break;
            case 2:
                pop();
                printf("\nStack Length : %d\n",length());
                display();
                break;
            case 3:
                printf("\nStack Length : %d\n",length());
                display();
                break;
            default:
                display();
                exit(0);
        }
    }
    return 0;
}
