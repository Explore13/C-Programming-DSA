// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *s;
};

void push(struct stack *st)
{
    if((st->top)==(st->size)-1)
    {
        printf("\nStack Overflow");
        return;
    }
    printf("\nEnter value : ");
    scanf("%d",&(st->s)[++st->top]);
}

void pop(struct stack *st)
{
    if((st->top)==-1)
    {
        printf("\nStack Underflow");
        return;
    }
    printf("\n %d is popped up",(st->s)[(st->top)--]);
}

void display(struct stack *st)
{
    if((st->top)==-1)
    {
        printf("\nStack Underflow");
        return;
    }
    printf("\nThe stack : \n");
    for (int i = (st->top); i >=0 ; --i) {
        printf("%d\n",(st->s)[i]);
    }
}
int main() {
struct stack st;
    printf("\n Enter the size of stack : \n");
    scanf("%d",&st.size);
    (st.top)=-1;
    (st.s)=(int *) malloc(sizeof(int)*(st.size));


    while (1){
        int choice;
        printf("\n1. Push : \n 2. Pop : \n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                push(&st);
                display(&st);
                break;
            case 2:
                pop(&st);
                display(&st);
                break;
            default:
                display(&st);
                exit(0);
        }
    }
    return 0;
}
