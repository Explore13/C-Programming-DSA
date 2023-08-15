//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    /*
   1)  Comma operator is the operator which is used to separate variables,values...
    e.g: 
    int a;
    int b;
    int c;

    int a,b,c;

  2)  int a=(3,5,4);
    comma operator will take rightmost value and removes other..Here, a=4;

3) comma operator has less presedence in C
int a=4,3,7;
so, here a=7 is wrong...
a=4; is right because = has higher presedence than , 
but here it produced an error because int a=4,int 3,int 7; ----> wrong expression...

    */
    int a=(3,4,6);
    printf("%d\n",a);

    int num,var;
    num=(var=15,var+35);
     printf("%d\n",num);
    return 0;
}