//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n1,n2,n3;
printf("Enter the value of n1:");
scanf("%d",&n1);
    printf("Enter the value of n2:");
    scanf("%d",&n2);
    printf("Enter the value of n3:");
    scanf("%d",&n3);
    if(n1>n2&&n1>n3)
    {
        printf("\n%d is largest number",n1);
    }
    else if(n2>n1&&n2>n3)
    {
        printf("\n%d is largest number",n2);
    }
    else{printf("\n%d is largest number",n3);
    }
    return 0;
}