//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

    int i=777;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("*ptr=%d\n",*ptr);// value of i
    printf("**ptr=%d\n",**pptr);// value of i
    printf("*pptr=%d\n",*pptr);//address of i
    printf("ptr=%u\n",ptr);//&i
    printf("&i=%u\n",&i);//address of i
    printf("pptr=%u\n",pptr);//address of ptr
    printf("& ptr=%u\n",&ptr);//address of ptr
    printf("i=%d\n",**pptr);//value of i




    return 0;
}