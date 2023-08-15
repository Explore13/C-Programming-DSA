//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

void fib(int);

int main() {

    int n = 5;

    printf("%d %d ", 0, 1);
    fib(n);

    return 0;
}

void fib(int n) {
    static long int fvalue = 0, svalue = 1, sum;
    if (n > 1) {
        sum = fvalue + svalue;
        fvalue = svalue;
        svalue = sum;
        printf("%ld ", sum);
        fib(n - 1);
    } else {
        printf("\n\n\n");
    }


}