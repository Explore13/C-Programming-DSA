// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL, *last = NULL;

void createLL() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->prev = NULL;
    newNode->next = NULL;
    printf("\nEnter Data : ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = last = newNode;
        first->prev = last;
    } else {
        last->next = newNode;
        newNode->prev = last;
        last = newNode;
        first->prev = last;
    }
    newNode->next = first;
}

void display() {
    struct node *p = first;
    if (p == NULL) {
        printf("\nNo Linked List");
        return;
    }
    do {
        printf("| %d | -> ", p->data);
        p = p->next;
    } while (p != first);
}

int main() {
    while (1) {
        int n;
        printf("\nChoice:\n\t1. Create LL : \n\t2. Display : \n\t");
        scanf("%d", &n);
        switch (n) {
            case 1:
                createLL();
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
}
