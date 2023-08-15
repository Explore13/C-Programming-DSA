//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
// to find the smallest among the three numbers
int main() {

    int a,b,c;
    printf("\n\tTO FIND THE SMALLEST NUMBERS:\n");
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    int result=   (a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("%d is Smallest",result);
    return 0;
}