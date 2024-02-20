// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
}*root=NULL;

int nodeHeight(struct node *p)
{
  int x , y;

  x = p && (p->lchild)?p->lchild->height:0;
  y = p && (p->rchild)?p->rchild->height:0;

    return (x>y)?x+1:y+1;

}

struct node *createBST(struct node *t,int val)
{
if(t==NULL)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->height = 1;
    newNode->lchild = newNode->rchild =NULL;
    return newNode;
}

if(val < t->data)
    t->lchild = createBST(t->lchild,val);
else
    t->rchild = createBST(t->rchild,val);

t->height = nodeHeight(t);
    return t;
}
int main() {

    return 0;
}
