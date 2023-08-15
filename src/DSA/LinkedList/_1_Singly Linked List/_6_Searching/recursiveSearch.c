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


//int max(struct node *p) {
//    int max=INT_MIN;
//    while(p!=NULL)
//    {
//        if(max<p->data)
//        {
//            max=p->data;
//        }
//
////    max=(max<p->data)?p->data:max; // You may use this
//
//        p=p->next;
//    }
//    return max;
//}

struct node* searching(struct node *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    else if(key==p->data)
    {
        return p;
    }
    else
    {
        return searching(p->next,key);
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
int main() {
    int n=1;
    while (n)
    {
        linkedList();
        printf("\n\n\nContinue? \n");
        scanf("%d",&n);
    }
    display();
    struct node *keyPos=searching(first,12);
    (keyPos!=NULL)?printf("Key is found : %d",keyPos->data): printf("Key not found");
    return 0;
}
