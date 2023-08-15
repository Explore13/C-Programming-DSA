//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n=10;
for(int row=1;row<=n;row++) {
    for(int space=1;space<=n-row;space++){
        printf(" ");
    }
    for(int col=1;col<=row;col++) {
        printf("*");
    }
    printf("\n");
}
    return 0;
}