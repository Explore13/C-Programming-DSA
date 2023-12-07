// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int fib(int);
int main() {
    printf("%d", fib(7));
    return 0;
}

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}