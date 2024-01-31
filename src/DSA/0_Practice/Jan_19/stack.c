// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *newArr;
};
void push(struct stack *st)
{
    if((st->top) == (st->size)-1)
    {
        printf("\nStack Overflow");
        return;
    }
    printf("\nEnter data to add into the stack : ");
    scanf("%d",&(st->newArr)[++(st->top)]);
}


void pop(struct stack *st)
{
    if((st->top)==-1)
    {
        return;
    }
    printf("\n%d is popped up",(st->newArr)[st->top--]);

}
void display(struct stack st)
{
    if(st.top==-1)
    {
        printf("\nStack Underflow\n\n");
        return;
    }

    printf("\nThe Stack : \n");
    for (int i = st.top; i > -1; --i) {
        printf("%d\n",(st.newArr)[i]);
    }
}


int main() {
    struct stack stk;
    printf("\nEnter the size of stack : ");
    scanf("%d", &stk.size);
    stk.top = -1;
    (stk.newArr) = (int *) malloc(sizeof(int)*(stk.size));

    while(1)
    {
        int ch,size;
        printf("\n1. Push : \n2. Pop : \n3. Increase Size : \n4. Any other key to exit : \n\nSelect an option : ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                push(&stk);
                display(stk);
                break;
            case 2:
                pop(&stk);
                display(stk);
                break;
            case 3:
                printf("\nEnter the size you want to add : ");
                scanf("%d",&size);
                printf("\n\nPrevious size was : %d",stk.size);
                stk.size += size;
                printf("\n\nNew size is : %d",stk.size);
                realloc(stk.newArr,stk.size);
                display(stk);
                break;
            default:
                display(stk);
                exit(0);
        }
    }
    return 0;
}
