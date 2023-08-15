//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
char ch;
printf("Enter a character:");
scanf("%c",&ch);

    ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))?printf("Alphabet"):printf("Not an Alphabet");
    return 0;
}

