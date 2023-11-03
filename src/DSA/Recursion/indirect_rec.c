// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void funcA(int);

void funcB(int);

int main() {
    funcA(20);
    return 0;
}

void funcA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funcB(n - 1);
    }
}

void funcB(int n) {
    if (n > 1) {
        printf("%d ", n);
        funcA(n / 2);
    }
}
