// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    char ch;
    printf("%d", ch);
    while(ch!='\n') {
        ch = getchar();
        printf("%d", ch);
    }
    return 0;
}
