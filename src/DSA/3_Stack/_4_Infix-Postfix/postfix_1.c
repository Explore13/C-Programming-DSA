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

void push(struct stack *st, char ch) {
    if (st->top == st->size)
        return;
    (st->s)[++(st->top)] = ch;
}

char pop(struct stack *st) {
    char ch = (st->s)[st->top];
    (st->top)--;
    return ch;
}

int operand(char ch) {
    if (ch == '+'|| ch == '-' || ch == '*' || ch=='/')
        return 0;
    else
        return 1;
}

int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
}

char *postFix_operation(char *exp) {
    struct stack st;
    st.size = strlen(exp)+1;
    st.top = -1;
    st.s = (char *) malloc(sizeof(char) * (st.size));
    char *postfix = (char *) malloc(sizeof(char) * (st.size));
    int i=0,j = 0;
   while(exp[i]!='\0') {
        if (operand(exp[i]))
        {
            postfix[j++] = exp[i++];
        }
        else
        {
            if (precedence(exp[i]) > precedence(st.s[st.top]) || st.top == -1)
            {
                push(&st, exp[i++]);
            }
            else {
                postfix[j++] = pop(&st);
            }
        }
    }

    while (st.top != -1) {
        postfix[j++] = pop(&st);
    }
    postfix[j] = '\0';

    return postfix;

}

int main() {
char *exp="a+b*c-d/e";
//printf("\nEnter Exp : ");
//fgets(exp,100,stdin);
char *postFix= postFix_operation(exp);
printf("\nThe Expression : %s",postFix);
    return 0;
}
