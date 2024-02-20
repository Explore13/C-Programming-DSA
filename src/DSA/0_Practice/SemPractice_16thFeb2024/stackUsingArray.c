// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *newStack;
};

void push(struct stack *stk)
{
    if(stk->top==stk->size-1)
    {
        printf("\nStack is overflow");
        return;
    }
    printf("\nEnter data to Push : ");
    scanf("%d",&(stk->newStack)[++(stk->top)]);
}


void pop(struct stack *stk)
{
    if(stk->top==-1)
    {
        printf("\nStack is underflow");
        return;
    }
    printf("\n%d is popped up",(stk->newStack)[stk->top--]);
}


int isEmpty(struct stack stk)
{
    return stk.top==-1;
}

int isFull(struct stack stk)
{
    return stk.top == stk.size-1;
}

void peekValue(struct stack stk)
{
    int pos;
    printf("\nEnter Position to get the value : ");
    scanf("%d",&pos);
    int index = stk.top-pos+1;
    if(index<0||index>stk.size-1)
    {
        printf("\nInvalid Position");
        return;
    }
    printf("\nThe Value : %d",(stk.newStack)[index]);
}

void display(struct stack stk)
{
    if(stk.top==-1)
    {
        printf("\nStack is Underflow");
        return;
    }

    printf("\nThe Stack : \n");
    for (int i = stk.top; i >=0 ; --i) {
        printf("%d\n",(stk.newStack)[i]);
    }
}



int main() {
struct stack stk;
    printf("\nEnter Stack Size : ");
    scanf("%d",&stk.size);
    stk.top=-1;
    stk.newStack=(int *) malloc(sizeof(int)*stk.size);

    while(1)
    {
        int ch;
        printf("\n1. Push \n2. Pop \n3. Display \n4. IsEmpty \n5.IsFull \n6. PeekValue \n\nEnter the Choice : ");
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
                display(stk);
                break;
            case 4:
                if (isEmpty(stk))
                    printf("\nStack is empty");
                else
                    printf("\nStack is not empty");
                break;
            case 5:
                if (isFull(stk))
                    printf("\nStack is Full");
                else
                    printf("\nStack is not Full");
                break;

            case 6:
                peekValue(stk);
                break;

            default:
                display(stk);
                exit(0);
        }
    }
    return 0;
}
