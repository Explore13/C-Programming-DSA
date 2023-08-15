//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int fact(int);

int main() {

    printf("%d",fact(4));

    return 0;
}
int fact(int n){

    /*
     here we basically remove the base case from the function...so,it has
     no ending point...it will be executing till the memory gets fulled...
     in loop which is called infinite loop,here we called this "stack overflow"..
     */
printf("%d\n",n);
return fact(n-1)*n;
}