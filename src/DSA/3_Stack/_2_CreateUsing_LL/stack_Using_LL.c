// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *top = NULL;

void push() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("\nStack Overflow");
        return;
    }
    printf("\nEnter data : ");
    scanf("%d", &newNode->data);
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        printf("\nNo popped up");
        return;
    }
    struct node *p = top;
    printf("\n%d is popped up", top->data);
    top = top->next;
    free(p);
}

void isEmpty() {
    (top == NULL) ? printf("\nStack is Empty") : printf("\nStack is not Empty");
}

void isFull() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    if (newNode == NULL)
        printf("\nStack is Full");
    else
        printf("\nStack is not full");

    free(newNode);
}

int size() {
    int len = 0;
    struct node *p = top;
    while (p != NULL) {
        len++;
        p = p->next;
    }
    return len;
}

void peekValue() {
    int pos, i = 1, len = size();
    struct node *p = top;
    printf("\nEnter Position : ");
    scanf("%d", &pos);
    if (p == NULL || pos > len) {
        printf("\nInvalid Operation");
        return;
    }
    while (i < pos) {
        p = p->next;
        i++;
    }
    printf("\nThe Value : %d", p->data);

}

void peekValue_dup() {
    int pos;
    struct node *p = top;
    printf("\nEnter Position : ");
    scanf("%d", &pos);
    for (int i = 1; p != NULL && i < pos; ++i) {
        p = p->next;
    }
    if (p&&pos>=0)
        printf("\nThe Value : %d", p->data);
    else
        printf("\nInvalid Position");
}

void display() {
    if (top == NULL) {
        printf("\nStack Underflow");
        return;
    }
    struct node *p;
    p = top;
    printf("\n\nThe Stack : \n");
    while (p != NULL) {
        printf(" <- %d", p->data);
        p = p->next;
    }
}

void freeLL() {
    if (top == NULL) {
        return;
    }
    struct node *p, *q = NULL;
    p = top;
    while (p != NULL) {
        q = p;
        p = p->next;
        free(q);
    }
    top = NULL;
}

int main() {
    while (1) {
        int n;
        printf("\nChoice : \n1. Push : \n2. Pop : \n3. Display : \n4. IsEmpty : \n5. IsFull : \n6. PeekValue : \n\nEnter Your Choice : ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                push();
                display();
                break;
            case 2:
                pop();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                isFull();
                break;
            case 6:
                peekValue();
                break;
            case 7:
                peekValue_dup();
                break;
            default:
                freeLL();
                exit(0);
        }

    }
}
