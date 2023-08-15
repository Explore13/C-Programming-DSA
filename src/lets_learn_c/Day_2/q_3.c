//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>=0&&ch<=127) {
    if(ch>=65&&ch<=90||ch<=122&&ch>=97) {
        printf("%c is an ALPHABET",ch);
    }
    else if(ch>='0'&&ch<='9'){
        printf("%c is a digit",ch);
    }
    else {
        printf("%c is a special character",ch);
    }
}
else{
    printf("Invalid");
}

    return 0;
}