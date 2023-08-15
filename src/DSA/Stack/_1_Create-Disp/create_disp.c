// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int arr[100],top=-1,length=sizeof(arr)/sizeof(arr[0]);

void push()
{
if(++top==length)
{
    printf("\nStack OverFlow");
    top--;
    return;
}
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
        printf("\n\nChoose : \n\t1. Push : \n\t2. Pop : \n\t3. Display : \n\t");
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
            default:
                display();
                exit(0);
        }
    }
    return 0;
}
