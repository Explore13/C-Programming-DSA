//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
void swap(int *,int *);
int main() {
int x,y;
printf("Enter two numbers:");
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("\tAfter swapping:\n\tX=%d and Y=%d",x,y);

    return 0;
}
void swap(int *x,int *y) {
    *x=*x + *y;
    *y=*x-*y;
    *x=*x-*y;
}