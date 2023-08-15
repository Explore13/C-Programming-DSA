//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
void message();

int main() {
int a;
a=message();

printf("%d",a);
    return 0;
}
void message() {
    printf("Viruses are written\n");
    return;// function is void,no return type
}