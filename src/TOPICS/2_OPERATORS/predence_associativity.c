//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int fun1() {
    printf("SURYA ");
    return 5;
}
int fun2() {
    printf("GHOSH ");
    return 3;
}
int main()
{
    int a=fun1()+fun2();
    printf("%d\n",a);

    //HOMEWORK

    int x=10,b=20,c=30,d=40;
    if(x<=b==d>c) {
        /*
        <= and > has higher presedence than ==
        <= and > has also associativity from left to right
        So,
        x<=b ---> 1
        d>c ---> 1
        Then 1==1 true...
        */
        printf("HELLO MR. EXPLORER :)");
    }
    else {
        printf("HELLO MR. SURYA GHOSH :)");
    }
    return 0;
}