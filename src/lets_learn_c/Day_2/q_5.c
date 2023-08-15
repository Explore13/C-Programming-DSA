//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int year,month;
    printf("Enter month number:");
    scanf("%d",&month);
    if(month==1) {
        printf("January:30 Days");
    }
    else if(month==2) {
        printf("Enter year:");
        scanf("%d",&year);
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("February:29 Days");
        }
        else{
            printf("February:28 Days");
        }
    }
    else if(month==3) {
        printf("March:31 Days");
    }    else if(month==4) {
        printf("April:30 Days");
    }    else if(month==5) {
        printf("May:31 Days");
    }    else if(month==6) {
        printf("June::30 Days");
    }    else if(month==7) {
        printf("July:31 Days");
    }    else if(month==8) {
        printf("Auguest:31 Days");
    }    else if(month==9) {
        printf("September:30 Days");
    }    else if(month==10) {
        printf("October:31 Days");
    }    else if(month==11) {
        printf("November:30 Days");
    }    else if(month==12) {
        printf("December:31 Days");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}