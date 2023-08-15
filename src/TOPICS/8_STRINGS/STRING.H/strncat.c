// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
/*
 strncat() is used to append a portion of string to another
 Syntax: strncat(str1,str2,n);
 n=portion you want
 The value of n actually indicates the last value of the string which will be printed
 from first to that point...
 */
char str1[10000]="Surya ";
char str2[]="Ghosh SG";
strncat(str1,str2,8);

puts(str1);
return 0;
}
