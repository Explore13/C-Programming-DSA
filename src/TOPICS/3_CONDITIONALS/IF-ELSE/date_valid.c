//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
    int dd, mm, yyyy;
    printf("Enter a date:");
    scanf("%d %d %d", &dd, &mm,&yyyy);
    if ((dd > 0 && dd <= 31) && (mm >= 1 && mm <= 12) && (yyyy > 0)) {

        if ((dd > 0 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)) {
            printf("\n\tDate is valid");
        } else if ((dd > 0 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11)) {
            printf("\n\tDate is valid");

        } else if ((dd > 0 && dd <= 29)) {
            if ((yyyy % 400 == 0) || (yyyy % 4 == 0 && yyyy % 100 != 0)) {
                if (dd > 0 && dd <= 29) {
                    printf("\n\tDate is valid");

                } else {
                    printf("\n\tInvalid Date");
                }
            } else {

                if (dd > 0 && dd < 29) {
                    printf("\n\tValid Date");


                } else {
                    printf("\n\t Invalid Date");
                }
            }
        }
    }
            else {


            printf("\n\t Invalid Date");
        }



    return 0;
}