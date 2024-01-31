//
// Created by surya on 11-12-2023.
//

#ifndef C_PROGRAMMING_STACKHEADER_H
#define C_PROGRAMMING_STACKHEADER_H
struct stack {
    int size;
    int top;
    struct node **newStack;
};

void push(struct stack *st, struct node *value) {
    if ((st->top) == (st->size - 1)) {
        printf("\nStack is full");
    } else {
        (st->newStack)[++(st->top)] = value;
    }
}

struct node *pop(struct stack *st) {
    struct node *x = NULL;
    if ((st->top) == -1)
        printf("\nStack is Empty");
    else
        x = (st->newStack)[(st->top)--];
    return x;
}

int isEmptyStack(struct stack st) {
    return (st.top) == -1;
}

#endif //C_PROGRAMMING_STACKHEADER_H
