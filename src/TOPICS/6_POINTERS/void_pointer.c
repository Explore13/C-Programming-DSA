//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int a=34;
char ch='a';
float b=4.5;
void *ptr;
ptr=&a;
    ptr=&b;
    ptr=&ch;
    printf("%d\n",*(int*)ptr);
    printf("%f\n",*(float*)ptr);
printf("%d\n",*(char*)ptr);

    return 0;
}