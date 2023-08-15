//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n=5;
for(int row=1;row<=2*n-1;row++) {
    int check =(row<=n)?row:(2*n-row);
    for(int col=1;col<=check;col++) {
        printf("* ");
    }
    printf("\n");
}
    return 0;
}