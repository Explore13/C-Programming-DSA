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

//int sum(struct node *p)
//{
//    int sum=0;
//    while(p!=0)
//    {
//        sum+=p->data;
//        p=p->next;
//    }
//    return sum;
//}


int max(struct node *p) {
if(p==NULL)
{
    return INT_MIN;
}

    return (p->data> max(p->next))?p->data: max(p->next);
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
int main() {
    int n=1;
    while (n)
    {
        linkedList();
        printf("\n\n\nContinue? \n");
        scanf("%d",&n);
    }
    display();
    printf("Max : %d", max(first));
    return 0;
}
