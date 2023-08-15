//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int n;
printf("Enter a number:");

scanf("%d",&n);
for (int row=1;row<=n;row++){

    for(int space=1;space<=(n-row);space++){
        printf(" ");
    }
    int count=1;
    for(int col=1;col<=row;col++){
        printf("%d ",count);
        count=count*(row-col)/col;
    }
    printf("\n");

}

    return 0;
}