// Welcome to EXPLORER's IDE

#include<stdio.h>
#include "string.h"
int length(char *ch){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        ++count;
    }
    return count-1;
}
int main() {
char ch[100];

fgets(ch,100,stdin);

    printf("Size of the string:%d",length(ch));

    return 0;
}
