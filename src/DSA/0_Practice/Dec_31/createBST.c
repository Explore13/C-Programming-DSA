// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    struct node *lchild;
    struct node *rchild;
    int data;
} *root = NULL;


/* Creating a BST using insertion */
void createBST() {
    int key;
    printf("\nEnter Data : ");
    scanf("%d", &key);
    if (root == NULL) {
        root = (struct node *) malloc(sizeof(struct node));
        root->data = key;
        root->lchild = root->rchild = NULL;
        return;
    }

    struct node *t = root, *p = NULL;
    while (t != NULL) {
        p = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }

    struct node *newChild = (struct node *) malloc(sizeof(struct node));
    newChild->data = key;
    newChild->lchild=newChild->rchild=NULL;
    if (key < p->data)
        p->lchild = newChild;
    else
        p->rchild = newChild;
}

/*Inorder*/
void inOrder(struct node *t) {
    if (t != NULL)
    {
        inOrder(t->lchild);
        printf("%d ", t->data);
        inOrder(t->rchild);
    }
}

void cleanup(struct node *t)
{
    if (t != NULL) {
        cleanup(t->lchild);
        cleanup(t->rchild);
        free(t);
    }
}
}

int main() {
    while(1)
    {
        int ch;
        printf("\nChoice : \n1. CreateTree : \n2. InOrder : \nChoose your option : ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                createBST();
                inOrder(root);
                break;
            case 2:
                inOrder(root);
                break;
            default:
                inOrder(root);
                cleanup(root);
                exit(0);
        }
    }
    return 0;
}
