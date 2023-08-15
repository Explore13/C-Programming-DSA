// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int n,count=1;
    printf("Enter number of row:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){

        for(int col=1;col<=row;col++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }


    return 0;
}
