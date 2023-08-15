// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first, *last;
void linkedList(){
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("\nEnter Data : \n");
    scanf("%d",&newNode->data);
    if(first==NULL)
    {
        first=last=newNode;
        return;
    }
    last->next=newNode;
    last=newNode;
}
void display(struct node *p)
{
    if(p!=NULL)
    {
        printf("|| %d || ->",p->data);
        display(p->next);
    }
}
int main() {
int n=1;
while(n)
{
    linkedList();
    printf("Want to Continue ?");
    scanf("%d",&n);
}
    display(first);
    return 0;
}
