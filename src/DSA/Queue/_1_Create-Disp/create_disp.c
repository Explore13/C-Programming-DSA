// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int arr[100],first=0,last=-1;
int length=sizeof(arr)/sizeof(arr[0]);
void EnQueue()
{
    if(++last!=length)
    {
        printf("\nQueue Data :");
        scanf("%d",&arr[last]);
    }
    else
    {
        printf("\nStack OverFlow");
        last--;
    }
}
void DeQueue()
{
    if(last==-1)
    {
        return;
    }
    printf("\n%d is Popped up",arr[first]);
    for(int i=first;i<last;i++)
    {
       arr[i]= arr[i+1];
    }
    last--;

}
void display()
{
    if(last==-1)
    {
        printf("\nQueue UnderFlow");
        return;
    }
    printf("\nThe Queue : \n");
    for (int i=0;i<=last;i++)
    {
        printf(" %d",arr[i]);
    }
}
int main() {
    while(1)
    {
        int n;
        printf("\n\nChoose : \n\t1. EnQueue : \n\t2. DeQueue : \n\t3. Display : \n\t");
        scanf("%d",&n);
        switch (n) {
            case 1:
                EnQueue();
                display();
                break;
            case 2:
                DeQueue();
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
}
