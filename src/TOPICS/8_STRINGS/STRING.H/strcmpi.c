// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    /*
    strcmp() is used to compare two strings to check if the strings are same or not..

    it is not case-sensitive ,it assumes A and a as same letter.
     Then it does the operation...

     if str1>str2 then it returns str1-str2
     str1<str2 then returns str1-str2
     str1==str2 then returns 0
     */
    char str1[]="fresh",str2[]="refresh";
    int i=strcmpi(str1,"FRESH"),j=strcmpi(str1,str2),k=strcmpi(str1,"f");
    printf("%d %d %d",i,j,k);
    return 0;
}
