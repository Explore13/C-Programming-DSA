//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    // BITWISE XOR  (^) OPERATOR
    /*

    TRUTH TABLE: 

    A   B   A^B
    0   0    0
    0   1    1
    1   0    1
    1   1    0

    */
    int a=4,b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    /*
    4=... 0 1 0 0
    3=... 0 0 1 1
    ---------------
    a=... 0 1 1 1
    b=... 0 0 1 1
    ---------------
    b=... 0 1 0 0 =4 (ans)
    a=... 0 1 1 1
    ---------------
    a=... 0 0 1 1 =3 (ans)
    */
    printf("AFTER XOR a= %d and b= %d\n",a,b); 

    printf("%d\n",a<<1);
    /*
    a<<1=... 0 0 1 1 0 = 6
    */
   printf("%d\n",b>>1); 
   /*
   b>>1= 0... 0 0 1 0 = 2 
   */
    return 0;
}