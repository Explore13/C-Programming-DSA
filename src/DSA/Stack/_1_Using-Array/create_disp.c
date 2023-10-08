// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int arr[5],top=-1,length=sizeof(arr)/sizeof(arr[0]);

void push()
{
if(top==length-1)
{
    printf("\nStack OverFlow");
    return;
}
    ++top;
    printf("\nEnter Data :");
    scanf("%d",&arr[top]);
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack UnderFlow");
        return;
    }
    printf("\n%d is popped up\n",arr[top]);
    top--;
}

void isEmpty()
{
    if(top==-1)
        printf("\nThe Stack is Empty");
    else
        printf("\nStack is not Empty");
}

void isFull()
{
    if(top==length-1)
    {
        printf("\nThe Stack is Full");
    }
    else
    {
        printf("\nThe Stack is not Full");
    }
}

void peekValue()
{
    int pos;
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    if(top-pos+1<0)
    {
        printf("\nInvalid Position");
    }
    else
    {
        printf("\n%d is the value",arr[top-pos+1]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nStack UnderFlow");
        return;
    }
    printf("\nThe Stack : \n");
    for (int i=top;i>=0;i--)
    {
        printf("\n%d",arr[i]);
    }
}
int main() {
    while(1)
    {
        int n;
        printf("\n\nChoose : \n\t1. Push : \n\t2. Pop : \n\t3. Display : \n\t4.IsEmpty : \n\t5. IsFull : \n\t6. PeekValue : \n\t");
        scanf("%d",&n);
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
            default:
                display();
                exit(0);
        }
    }
    return 0;
}
