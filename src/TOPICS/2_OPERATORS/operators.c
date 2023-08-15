//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    /*
    1. Arithmetic
    2. Relational
    3. Logical
    4. Bitwise
    5. Assignment 
    6. Ternary
    */

   //ARITHMETIC OPERATOR (+,-,*,/,% )
   int a=55,b=65;
   printf("%d\n",a+b); 
printf("%d\n",a-b+a+b);

//RELATIONAL OPERATOR (==,!=,<=,>=,<,>)

printf("%d\n",a<b);
printf("%d\n",a>=b);

//LOGICAL OPERATOR (&&,||,!)
int sos=(a<b) || (a==b);

printf("%d\n",sos);

//ASSIGNMENT OPERATOR (+=,-=,*=,/=,%=)

printf("%d\n",a+=b);

//BITWISE OPERTOR 
/*
Bitwise AND--> &  Bitwise OR---> | 
Bitwise NOT---> ~ BITWISE XOR---> ^
Left Shift--->  <<  Right Shift---> >>
*/
int x=5,y=4; /*
5= 0 1 0 1 
4= 0 1 0 0
-----------
&  0 1 0 0 = 4
|  0 1 0 1 = 5
^  0 0 0 1 = 1

~5= 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1
-------------------------------------------------------------------
    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 0

    x<<2= ... 0 1 0 1 0 0 = 4+16=20
    y>>1= 0 ...0 0 0 1 0 = 2
*/
printf("%d\n",x&y); // 4

printf("%d\n",x|y); // 5
printf("%d\n",~x); //-6
printf("%d\n",x&y); // 4
printf("%d\n",x^y); // 1
printf("%d\n",x<<2); // 20
printf("%d\n",y>>1); // 2
    return 0;
}