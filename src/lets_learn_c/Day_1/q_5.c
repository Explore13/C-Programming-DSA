//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

char ch;
printf("Enter an Alphabet:");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') {
            printf("%c is a Vowel",ch);
        }
        else{
            printf("%c is a consonant",ch);
        }
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}