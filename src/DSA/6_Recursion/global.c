// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int x;
int func(int n) {

    if (n > 0) {
        x++;
        return func(n - 1) + x;
    }
    return 0;
}

int main() {
    int a = 5;
    printf("%d",func(a));
    return 0;
}

/*
 Global variable is that variable which is initialized inside code section and initialized only once.
 It can be only one copy. It is initialized in globally.
 */
