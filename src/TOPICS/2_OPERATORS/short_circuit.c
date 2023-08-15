//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    //short circuit in &&
    /*
    in this case if any condition returns false in anywhere in the expression,
    the rest of the expression will not be evaluated...
    */
int  a=5,b=3;
int incr=(a<b)&&(b++);  // (a<b)---> false(0),,,(b++) will not be evaluated..
printf("%d\n",incr); // 0
printf("%d\n",b); // 3


//short circuit in ||
/*
In this case,if any condition returns true in anywhere in the expression
the rest of the expression will not be evaluated...
*/
    int var=(a>b)||(b++); //(a>b) --->true(1),,,(b++) will not be evaluated..
    printf("%d\n",var); // 1
printf("%d\n",b); //3

    return 0;
}