//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{

/*
? : is a Ternary Operator...Only Ternary Operator available in C...
? : is a boolean expression...
*/
    int var=75;
    int var2=56;
    int num;
    num=sizeof(var)?(var2>23?((var==75)?'A':0):0):0;
    /*
    var==75 is true so 'A' execute..
    Then var2>23 is true so output becomes 'A'...
    Now sizeof(var)=4,which means true..so the num='A'
    ASCII VALUE OF 'A'=65..
    The final output is 65
    */
    printf("%d",num); //65

    return 0;
}