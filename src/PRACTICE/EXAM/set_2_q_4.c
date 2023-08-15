//Write a program to input week number and print week day.
//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {

int num;
printf("Enter Week Day:");
scanf("%d",&num);
    if(num==1)
        printf("Sunday");
    else if(num==2)
        printf("Monday");
    else if(num==3)
        printf("Tuesday");

    else if(num==4)
        printf("Wednesday");

    else if(num==5)
        printf("Thursday");
    else if(num==6)
        printf("Friday");

    else if(num==7)
        printf("Saturday");
    else
        printf("INVALID INPUT");

    return 0;
}