//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int fun(int *,int *);
int main() {
    int a=3,b=4;
    fun(&a,&b);
printf("%d %d",a,b);
    return 0;
}
int fun(int *ptr1,int *ptr2) {
    *ptr1=4;
    *ptr2=3;


}