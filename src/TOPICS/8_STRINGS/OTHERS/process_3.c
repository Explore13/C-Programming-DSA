//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<string.h>
int main() {
char ch[100];
//scanf("%s",ch);
/*
 in this case %s only take a single word..it can not store (space)...
 so we need to add %[^\n]s replacing %s in scanf() function to take the input in string with spaces...
 */
    scanf("%[^\n]",ch);
printf("%s",ch);
return 0;
}