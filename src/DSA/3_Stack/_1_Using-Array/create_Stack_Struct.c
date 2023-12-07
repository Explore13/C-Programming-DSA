// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *s;
};

void push(struct stack *st) {
    if ((st->top) == (st->size) - 1) {
        printf("\nStack Overflow");
        return;
    }
    (st->top)++;
    printf("\nEnter Value : ");
    scanf("%d", &(st->s)[st->top]);
}

void pop(struct stack *st) {
    if ((st->top) == -1) {
        printf("\nNo Popped up");
        return;
    }
    printf("\n%d is popped up", (st->s)[st->top]);
    (st->top)--;
}

void peekValue(struct stack *st) {
    int pos;
    printf("\nEnter Position : ");
    scanf("%d", &pos);
    if ((((st->top) - pos) + 1) < 0 || (((st->top) - pos) + 1) > (st->top)) {
        printf("\nInvalid Position");
        return;
    }
    printf("\nThe Value is : %d", (st->s)[(st->top) - pos + 1]);

}

void isEmpty(struct stack *st) {
    ((st->top == -1)) ? printf("\nThe Stack is Empty") : printf("\nStack is not Empty");
}

void isFull(struct stack *st) {
    ((st->top == (st->size) - 1)) ? printf("\nStack is full") : printf("\nStack is not full");
}

void display(struct stack *st) {
    if ((st->top) == -1) {
        printf("\nStack Underflow");
        return;
    }
    printf("\n\nThe Stack : \n");
    for (int i = (st->top); i >= 0; --i) {
        printf("%d\n", (st->s)[i]);
    }
}

int main() {
    struct stack st;
    printf("\nEnter the size : ");
    scanf("%d", &(st.size));
    (st.top) = -1;
    (st.s) = (int *) malloc(sizeof(int) * (st.size));
    while (1) {
        int choice;
        printf("\nChoice : \n1. Push : \n2. Pop : \n3. Display : \n4. IsEmpty : \n5. IsFull : \n6. PeekValue : \n\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(&st);
                display(&st);
                break;
            case 2:
                pop(&st);
                display(&st);
                break;
            case 3:
                display(&st);
                break;
            case 4:
                isEmpty(&st);
                break;
            case 5:
                isFull(&st);
                break;
            case 6:
                peekValue(&st);
                break;
            default:
                free(st.s);
                exit(0);
        }
    }
}
