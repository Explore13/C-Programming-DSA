// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first,*last;

void linkedList()
{
    struct node *newNode;
    newNode=(struct node*) malloc(sizeof (struct node));
    newNode->next=NULL;
    printf("Enter Value : \n");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    last->next=newNode;
    last=newNode;
}

int count(struct node *p)
{
if(p==NULL)
{
    return 0;
}
    return count(p->next)+1;
}
int main() {
    int n=5;
    while(n)
    {
        linkedList();
        --n;
    }
    printf("Length : %d",count(first));
    return 0;
}
