//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
char ch[]="Surya Ghosh";
/*
 In this case we don't need to add \0 in the last
 compiler automatically adds \0 in the last..
 here size of the string is 12
 */
    int x=sizeof(ch);
    printf("Size= %d\n",x);
    for (int i = 0; ch[i]!='\0'; ++i) {
        printf("%c",ch[i]);
    }

    return 0;
}