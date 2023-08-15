// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first, *last;


int length(struct node *p) {
    int c = 0;
    while (p != NULL) {
        c++;
        p = p->next;
    }
    return c;
}

void insertPos() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter  a number : \n");
    scanf("%d", &newNode->data);
    int len = length(first);
    if (len == 0) {
        first = newNode;
        last = newNode;
        return;
    }
    int pos;
    printf("Enter Position : ");
    scanf("%d", &pos);
    if (pos == 0) {
        newNode->next = first;
        first = newNode;
    } else if (pos <= len-1) {
        struct node *temp = first;
        int i = 0;
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    } else if (pos > len-1) {
        last->next = newNode;
        last = newNode;
    }
}

void insertFirst() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter a number : ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = newNode;
        last = newNode;
        return;
    }
    newNode->next = first;
    first = newNode;
}


void insertLast() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter a number : ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = newNode;
        last = newNode;
        return;
    }
    last->next = newNode;
    last = newNode;
}

void display() {
    struct node *p= first;
    while (p != NULL) {
        printf("| %d | -> ", p->data);
        p = p->next;
    }
}

int main() {
    while (1) {
        int i;
        printf("\n1 to Insert at Last : \n 2 to Insert at First : \n 3 to Insert at Pos : \n 0 to Exit : \n");
        scanf("%d", &i);
        switch (i) {
            case 1 :
                insertLast();
                display();
                break;
            case 2:
                insertFirst();
                display();
                break;
            case 3:
                insertPos();
                display();
                break;
            case 4:
                display();
                break;
            case 0:
                exit(0);
            default:
                display();
                break;
        }
    }
    return 0;
}
