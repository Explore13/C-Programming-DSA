// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int n,count=1;
    printf("Enter number of row:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        char ch='A';
        for(int col=1;col<=row;col++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }


    return 0;
}
