//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    /*
    += -= *= /= %= ^= <<= >>= &= |= =

    It is binary operator..It needs L-Value and R-value...
    int var=169; Here var ---> L-Value and 169 ---> R-Value
    = Assignment Operator...
    */
    char a=7;
    a^=5;
    /*
    a= 0 1 1 1
    5= 0 1 0 1
    -----------
    a= 0 0 1 0 =2
    */
    printf("%d",printf("%d",a+=3) ); // 2nd %d ---> 5 and 1st %d---> 1

    return 0;
}