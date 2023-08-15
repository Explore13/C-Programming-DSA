//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n,space,col;
printf("Enter the number:");
scanf("%d",&n);
for(int row=1;row<=2*n-1;row++){
    //space printing

    space=(row>n)?(row-n):(n-row);
    for(int j=1;j<=space;j++){
        printf(" ");
    }
  //star printing
  col=(row>n)? (n-space):(row);
    for(int k=1;k<=col;k++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}