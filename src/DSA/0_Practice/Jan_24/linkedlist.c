// Welcome to EXPLORER's IDE

#include<stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};
struct node *first = NULL, *last = NULL;

void createNode() {
    struct node *newNode;
    newNode = (struct node *) malloc(sizeof(struct node *));
    newNode->next = NULL;
    printf("\nEnter Data : ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = newNode;
    } else {
        last->next = newNode;
    }
    last = newNode;

}


void display() {
    if (first == NULL)
    {
        printf("\nNo LinkedList is there");
    }
    else
    {
        printf("\nLinkedList : ");
        struct node *p = first;
        while (p != NULL) {
            printf("%d || %u -> ", p->data, p);
            p = p->next;
        }
    }
}

int main() {
    while(1)
    {
        int ch;
        printf("\n1. CreateLL : \n2. Display : \n\n Enter your choice : ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                createNode();
                display();
                break;
            case 2:
                display();
                break;
            default:
                display();
                exit(0);
        }
    }


    return 0;
}
