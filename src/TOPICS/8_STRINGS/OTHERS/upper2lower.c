// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
char str[100];
fgets(str,100,stdin);
for(int i=0;str[i]!='\0';i++){
    if((int)str[i]>=65&&(int)str[i]<=90){
        str[i]=str[i]+32;
    }
}
    //puts(str);
    /*
     The puts function does not print the string after it has been converted to lowercase in your program. This is because puts prints the string until it encounters a null character (\0) in the original string, and in your program, the null character remains at the end of the string even after the characters have been converted to lowercase.


     */
    printf("%s",str);
    return 0;
}
