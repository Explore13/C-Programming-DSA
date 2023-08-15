//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    // Q:1

    printf("%d",printf("%s","Hello World!")); //%s will print the Hello WOrld! but then %d will print the total number of letters print in the screen...
    //%s=Hello World! and %d=12 (Hello World!  contains 12 characters)
printf("\n\n");
    //Q:2
printf("%s\n","Hello");
    printf("%10s","Hello"); //%10s means we need to print string upto 10 letters but there are only 5 letters in Hello
    // so five blank spaces will print before Hello....... 5 blank spaces + Hello=10 

printf("\n\n");
    //Q:3
/*FORMULA: for exceeding the range: number mod 2^bits= value

eg: 265%2^8=9
*/
    char c=255;
  c=c+10;
    printf("%d\n",c); //outpur=9 because char has the max value of 255 so 256=0,257=1 and 265=9...

printf("\n\n");

    //Q:4
/*
All are correct method to define...Compiler normally assume the int datatype...
*/

signed i;
signed int j;
unsigned a;
long m;
long long d;

i=1;
j=2;
a=3;
m=4;
d=5;

printf("%d %d %u %lu %llu",i,j,a,m,d);

printf("\n\n");

//Q:5
/*
For unsigned s it is 1 and int t means signed int t=-4..Then s+t=-3 but there is %u..it means 
it will not hold -3 value...range of the unsigned int 0 to 4294967295...  so if we go backwards from 0 then -1=4294967295,
-2=4294967294 and -3=4294967293...so answer will be 4294967293...
*/
unsigned s=1;
int t=-4;
printf("%u\n",s+t);

    return 0;
}