// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
char ch[100];
fgets(ch,100,stdin);
/*
 we can use fgets(string_name,sizeof(string_name);stdin); in the place of gets()
 because gets() is not safe...

 */

puts(ch);
    return 0;
}
