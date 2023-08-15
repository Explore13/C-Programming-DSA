//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
    char ch[] = {'s', 'u', 'r', 'y', 'a', '\0'};
/*
 it will produce an errror...because there is no \0 in the last...we have to add \0 in the last
 size of the string is 6
 size is counted adding \0 also..
 */
    for (int i = 0; ch[i] != '\0'; i++) {
        printf("%c ", ch[i]);
    }

    return 0;
}