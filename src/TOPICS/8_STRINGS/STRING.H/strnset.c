// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    /*
     strnset() sets the position of characters in a srring to
     given character
     syntax: strnset(str,'#',5)
     */
char pass[100]="SURYA GHOSH";
printf("\n%s\n",strnset(pass,'#',5));
    return 0;
}
