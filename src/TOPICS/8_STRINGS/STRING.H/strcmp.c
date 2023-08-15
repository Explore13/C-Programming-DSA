// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
char str1[]="SURYA",str2[]="GHOSH";
    printf("%d",strcmp(str1,str2));
    if(strcmp(str1,str2)==0){
        printf("Both are same");
    }
else
{
    /*
    strcmp() is used to compare two strings to check if the strings are same or not..

     It checks two string when it found the odd letter in both strings
     it subtracts both letter's ASCII value and check it.
     if str1>str2 then it returns 1
     str1<str2 then returns -1
     str1==str2 then returns 0
     */
    printf("Both are not same");
}
return 0;
}
