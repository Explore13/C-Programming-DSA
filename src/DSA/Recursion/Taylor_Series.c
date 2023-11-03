// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int power(int x,int n);
int fact(int n);
int taylor(int x,int n);

int main() {
    printf("%d", taylor(5,3));
    return 0;
}

int power(int x,int n)
{
    int value=1;
    for (int i = 0; i < n; ++i) {
        value*=x;
    }
    return value;
}

int fact(int x)
{
    if(x==0)
        return 1;
    return fact(x-1)*x;
}
int taylor(int x,int n)
{
    static int store=0;
    if(n==0)
        return 1;
    return taylor(x,n-1)+(power(x,n)/fact(n));
}