// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    /*
     strchr() returns pointer to 1st occurance of char in str.
     syntax: strchr(str,'A')
     */
char str[100]="SURYA GHOSH";
char *p;
p=strchr(str,'H');
printf("Found in:%d %d %d",p,str,p-str);
    return 0;
}
