// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int n,count=1;
    printf("Enter number of row:");
    scanf("%d",&n);
    for(int row=n;row>=1;row--){
        for(int space=1;space<=n-row;space++){
            printf("  ");
        }
        char ch=64+row;
        for(int col=1;col<=row;col++){
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
    }


    return 0;
}
