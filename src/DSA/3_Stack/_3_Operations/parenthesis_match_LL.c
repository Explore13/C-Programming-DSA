// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct stack
{
    char data;
    struct stack *next;
} *top=NULL;
void push(char ch)
{
    struct stack *newNode=(struct stack*) malloc(sizeof(struct stack));
    if(newNode==NULL)
    {
        printf("\nStack Overflow");
        return;
    }
    newNode->data=ch;
    newNode->next=top;
    top=newNode;
}

void pop()
{
    if(top==NULL)
    {
        printf("\nStack Underflow");
        return;
    }
    struct stack *p=top;
    top=top->next;
    free(p);
}
void isBalance(char *exp)
{
    for (int i = 0; exp[i]!='\0'; ++i) {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)
            {
                printf("\nInvalid Exp");
                return;
            }
            pop();
        }
    }
    if(top==NULL)
    {
        printf("\nValid Exp");
    }
    else
    {
        printf("\nInvalid Exp");
    }
}

int main() {
char exp[100];
    printf("\nEnter Exp : ");
    fgets(exp,100,stdin);
    isBalance(exp);
    return 0;
}
