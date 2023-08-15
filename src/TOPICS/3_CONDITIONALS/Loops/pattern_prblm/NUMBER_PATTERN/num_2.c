//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
    int n,count=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++) {
        for(int space=1;space<=(n-row);space++){
            printf(" ");
        }
        for(int col=1;col<=row;col++){
            if(count%2==0){
                printf("0 ");
            }
            else {
                printf("1 ");
            }
            count++;
        }
        printf("\n");
    }
    return 0;
}