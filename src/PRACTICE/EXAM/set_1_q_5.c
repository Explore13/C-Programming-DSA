//Write a program to check if a character is a vowel or a consonant
#include<stdio.h>
int main()
{

    char ch;
    printf("Enter an Alphabet:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z') {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("%c is a Vowel",ch);
    }
    else {
    printf("%c is an Consonent",ch);
    }
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}