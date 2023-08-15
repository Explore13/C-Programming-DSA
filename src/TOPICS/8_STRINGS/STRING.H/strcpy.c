// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
/*
 strcpy() Copies str2 to str1
 Syntax: strcpy(str1,str2);
 */
char str1[]="Surya Ghosh";
char str2[]="SG";
    strcpy(str1,str2);
    /*
     if you want to copy the data from str22 and put it in
     str1 then use strcpy(str1,str2) and vice vars..
     */
    puts(str2);
    return 0;
}
