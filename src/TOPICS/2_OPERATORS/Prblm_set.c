//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    //Q:1
    int i=5;
    int var=sizeof(i++); // var=4,i++  not evaluated...
    /*
    For sizeof operator ,size is determind from the type of the operand...
    Inside the sizeof operator there may be an expression or parenthesized name of
    a type...But the operand is not evaluated...
    NOTE: For a variable length array type is only evaluated inside the sizeof...
    */
    printf("%d %d\n",i,var); //5 4

    //Q:2

    int a=1,b=1;
    int c=++a||b++;
    int d=b--&&--a;
    /*
    NOTE: IF THERE BECOMES TRUE(1) IN 1ST OPERAND AND AFTER THAT THERE IS AN OR(||)
    OPERATOR,THEN 2ND OPERAND WILL NOT BE EXECUTED....


        Here  ++a means 2 which is True..After this there is a || operator...
    So, b++ will not be execute,therefore b=1 and a=2

    In 2nd step, b-- means 1 (true)...After this --a=1 and its also true..
    So it becomes true overall...
    here a=1,b=0; 


    */
    printf("%d %d %d %d\n",d,c,b,a); // 1 1 0 1
    return 0;
}