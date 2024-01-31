// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include "NewHeader.h"
struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

void createTree()
{
    struct node *p, *t;
    int data;

    struct queue Q;
    Q.size=100;
    Q.front=Q.back=-1;
    Q.newQ=(struct node **)malloc(sizeof(struct node *)*(Q.size));
    root=(struct node *) malloc(sizeof(struct node));
    root->lchild=root->rchild=NULL;
    printf("\nEnter Data : ");
    scanf("%d",&(root->data));
    enQueue(&Q,root);

    while(!isEmpty(Q))
    {
        p= deQueue(&Q);
        printf("\nEnter Left Child data of %d : ",p->data);
        scanf("%d",&data);
        if(data!=-1)
        {
            t=(struct node *) malloc(sizeof(struct node));
            t->data=data;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enQueue(&Q,t);
        }
        printf("\nEnter Right Child data of %d : ",p->data);
        scanf("%d",&data);
        if(data!=-1)
        {
            t=(struct node *) malloc(sizeof(struct node));
            t->data=data;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enQueue(&Q,t);
        }
    }
}


/* Level Order Traversal */
void levelOrderTraversal(struct node *t)
{
    if(t!=NULL)
    {
        struct queue Q;
        Q.size=100;
        Q.front=Q.back=-1;
        Q.newQ=(struct node **)malloc(sizeof(struct node *)*(Q.size));
        printf("%d ",t->data);
        enQueue(&Q,t);
        while(!isEmpty(Q))
        {
            t= deQueue(&Q);
            if(t->lchild)
            {
                printf("%d ",t->lchild->data);
                enQueue(&Q,t->lchild);
            }
            if(t->rchild)
            {
                printf("%d ",t->rchild->data);
                enQueue(&Q,t->rchild);
            }
        }
    }
}
int main() {

    createTree();
    printf("\nLevel Order Traversal : ");
    levelOrderTraversal(root);
    return 0;
}
