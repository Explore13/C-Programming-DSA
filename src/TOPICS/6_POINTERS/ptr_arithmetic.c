//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int age=22;
int *ptr=&age;
printf("%u ",ptr);
printf("%d ",*ptr);
ptr++;
printf("%u ",ptr);
printf("%d ",*ptr);

    return 0;
}