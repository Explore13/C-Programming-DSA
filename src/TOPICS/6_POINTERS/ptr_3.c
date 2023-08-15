//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
void fun(int *x,int *y); //function declaration
//in func declaration parameter name is not imp
int main() {
    int i=5,j=2;
    fun(&i,&j); //func call,we are sending address of i and j as arguments
    printf("%d %d",i,j); //25 4

    return 0;
}
void fun(int *i,int *j){ //we are taking address of i and j as parameter
    *i=*i**i; //value we changed in main func
   * j=*j**j;//value we change in main func

}