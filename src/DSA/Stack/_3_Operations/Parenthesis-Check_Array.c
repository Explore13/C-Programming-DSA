// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct stack {
    int top;
    int size;
    char *s;
};

void push(struct stack *st,char ch)
{
if((st->top)==(st->size))
{
    return;
}
    (st->top)++;
    (st->s)[st->top]=ch;
}
void pop(struct stack *st)
{
    if(st->top==-1)
        return;
    (st->top)--;
}
void checkBalanced(char *ch)
{
    struct stack st;
    (st.size)= strlen(ch);
    st.top=-1;
    (st.s)=(char *) malloc(sizeof(char)*st.size);
    for (int i = 0; ch[i]!='\0'; ++i) {
        if(ch[i]=='(')
            push(&st,ch[i]);
        else if(ch[i]==')')
        {
            if (st.top == -1) {
                printf("\nInvalid Expression");
                return;
            }
            pop(&st);
        }
    }
    if(st.top==-1)
        printf("\nValid Expression");
    else
        printf("\nInvalid Expression");
}

int main() {
    char ch[100];
    printf("\nEnter Expression : ");
    fgets(ch, 100, stdin);
    checkBalanced(ch);

    return 0;
}
