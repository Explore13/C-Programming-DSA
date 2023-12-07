// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int fib(int);

int main() {

    printf("%d",fib(7));

    return 0;
}

int fib(int range)
{
    static int fValue=1;
//    static int sValue=1;
    static int total=0;
    if(range==0)
        return total;
    int temp = total;
    total+=fValue;
    fValue = temp;
    return fib(range-1);
}