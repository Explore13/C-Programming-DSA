// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct stack {
    int data;
    struct stack *next;
} *top = NULL;

void push() {
    struct stack *newStack = (struct stack *) malloc(sizeof(struct stack));
    if (newStack == NULL) {
        printf("\nStack Overflow");
        return;
    }
    printf("\nEnter data : ");
    scanf("%d", &(newStack->data));
    newStack->next = top;
    top = newStack;
}

void pop() {
    if (top == NULL) {
        printf("\nStack Underflow");
        return;
    }
    struct stack *temp = top;
    printf("\n%d is popped up",top->data);
    top=top->next;
    free(temp);
}

void display() {
    if (top== NULL) {
        printf("\nStack Underflow");
        return;
    }

    printf("\nThe Stack : \n");
    struct stack *temp = top;
    while (temp != NULL) {
        printf("<- %d ",temp->data);
        temp=temp->next;
    }
}

void freeStack()
{
    struct stack *p=top;
    while(p!=NULL)
    {
        top=top->next;
        free(p);
        p=top;
    }
}

int main() {
    while (1)
    {
        int ch;
        printf("\n 1. Push \n 2. Pop \n 3. Display\n Enter Choice : ");
        scanf("%d",&ch);
        switch (ch) {
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
            default:
                display();
                freeStack();
                exit(0);
        }
    }
    return 0;
}
