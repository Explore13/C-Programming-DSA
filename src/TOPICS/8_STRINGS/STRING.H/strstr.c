// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    /*
     strstr() returns pointer to 1st occurance of a word/string
     in str
     syntax:strstr(str,"GHOSH");
     */
char *str="SURYA GHOSH";
char *p;
p=strstr(str,"G");
printf("%s\n",p);
    return 0;
}
