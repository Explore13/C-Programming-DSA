//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int fib(int);//func declaration
int main() {

int n=6 ;
printf("%d",fib(n));//func call
    return 0;
}
int fib(int n){//func definition

    if(n==0){
        return 0;
    }

    else if(n==1) {
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}
