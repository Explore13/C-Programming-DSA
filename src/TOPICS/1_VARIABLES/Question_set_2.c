//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>


#define SURYA "%s\n"

#define GHOSH "WELCOME TO EXPLORER's IDE :)"

int main() 
{

    //Q:1

    int var=052; 
/*
NOTE: When we ad`````d 0 in front of any value,
the value becomes Octal Value...We need to 
change octal value into decimal value...
*/
 printf("%d\n",var); // {(0*8^2)+(5*8^1)+(2*8^0)}=42


 //Q:2

 int x=034;
 printf("%o\n",x); /*
 %o is the format specifier of Octal Value.. 
 output=34
 */


//Q:3

printf(SURYA,GHOSH); //HERE WE USE CONSTANTS...
    return 0;
}