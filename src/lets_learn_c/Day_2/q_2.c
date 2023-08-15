//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int marks;
printf("\n\tEnter marks in parcentage:");
scanf("%d",&marks);
if(marks>=0&&marks<=100) {
    if (marks <= 100 && marks >= 90) {
        printf("Your Grade:O");
    } else if (marks >= 80 && marks <= 89) {
        printf("Your Grade:E");
    } else if (marks >= 70 && marks <= 79) {
        printf("Your Grade:A");
    } else if (marks >= 60 && marks <= 69) {
        printf("Your Grade:B");
    } else if (marks <= 59 && marks >= 50) {
        printf("Your Grade:C");
    } else if (marks <= 49 && marks >= 40) {
        printf("Your Grade:D");
    } else {
        printf("Your Grade:Fail");
    }
}
else{
    printf("Please Enter a valid marks:");
    main();
}
    return 0;
}