// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int n;
    printf("Enter number of row:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int space=1;space<=n-row;space++){
            printf(" ");
        }
        int count=row;
        for(int col=1;col<=row;col++){
            printf("%d ",count);
        }
        printf("\n");
    }


    return 0;
}
