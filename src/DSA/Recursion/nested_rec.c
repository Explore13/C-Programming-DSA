// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int funcA(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return funcA(funcA(n+11));
    }
}
int main() {
    printf("%d", funcA(95));
    return 0;
}
