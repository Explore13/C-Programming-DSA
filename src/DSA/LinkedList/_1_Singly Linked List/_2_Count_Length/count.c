// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first=0,*last;

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
    int c=0;
    while (p!=0)
    {
        c++;
        p=p->next;
    }
    return  c;
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
