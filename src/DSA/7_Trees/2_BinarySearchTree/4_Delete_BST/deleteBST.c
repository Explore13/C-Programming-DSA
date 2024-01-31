// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

/* Create or Insert Binary Search Tree */
void insertCreateBinaryTree(int key) {
    struct node *r = NULL, *t = root;
    if (t == NULL) {
        struct node *newChild = (struct node *) malloc(sizeof(struct node));
        newChild->data = key;
        newChild->lchild = newChild->rchild = NULL;
        root = newChild;
        return;
    }
    while (t != NULL) {
        r = t;
        if (t->data == key)
            return;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    struct node *newChild = (struct node *) malloc(sizeof(struct node));
    newChild->data = key;
    newChild->lchild = newChild->rchild = NULL;
    if (key < r->data)
        r->lchild = newChild;
    else if (key > r->data)
        r->rchild = newChild;
}

struct node * createTree(int key)
{
    struct node *newNode = (struct node *)malloc(sizeof (struct node));
    newNode->data=key;
    newNode->lchild = newNode->rchild=NULL;
    return newNode;
}
struct node *RInsert(struct node *t, int key)
{
    if(t==NULL)
        return createTree(key);
    else if(key < t->data)
        t->lchild = RInsert(t->lchild,key);
    else if(key > t->data)
        t->rchild = RInsert(t->rchild,key);

    return t;
}



/* Deleting a Binary Search Tree */

int height(struct node *p)
{
    int x,y;
    if(p==NULL)
        return 0;
    else
    {
        x = height(p->lchild);
        y = height(p->rchild);
        return (x>y)?x+1:y+1;
    }

}

struct node *InPre(struct node *p)
{
if(p && p->rchild!=NULL)
    return InPre(p->rchild);
    return p;
}

struct node *InSucc ( struct node *p)
{
    if(p && p->lchild !=NULL)
        return InSucc(p->lchild);
    return p;
}
struct node *deleteNode(struct node *p, int key)
{
    struct node *q;
    if(p==NULL)
        return NULL;
    if(p->lchild==NULL&&p->rchild==NULL)
    {
        if(p==root)
            free(root);
        free(p);
        return NULL;
    }

    if(key < p->data)
        p->lchild = deleteNode(p->lchild,key);
    else if(key>p->data)
        p->rchild = deleteNode(p->rchild,key);
    else
    {
        if(height(p->lchild) > height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = deleteNode(p->lchild,q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = deleteNode(p->rchild,q->data);
        }
    }

    return p;
}

/* InOrder Traversal */
void inOrder(struct node *t) {
    if (t != NULL) {
        inOrder(t->lchild);
        printf("%d ", t->data);
        inOrder(t->rchild);
    }
}

int main() {
    while (1) {
        int key, ch;
        printf("\nChoice : \n1. CreateTree : \n2. InsertTree : \n3. DeleteTree : \n4. InOrder : \nChoose your option : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\nEnter Value to Add  : ");
                scanf("%d", &key);
                if(root==NULL)
                    root = RInsert(root,key);
                else
                    RInsert(root,key);
                inOrder(root);
                break;
            case 2:
                printf("\nEnter Value to insert  : ");
                scanf("%d", &key);
                insertCreateBinaryTree(key);
                inOrder(root);
                break;

            case 3:
                printf("\nEnter Value to search  : ");
                scanf("%d", &key);
                deleteNode(root,key);
                inOrder(root);
                break;
            case 4:
                inOrder(root);
                break;

            default:
                inOrder(root);
                exit(0);
        }
    }
    return 0;
}
