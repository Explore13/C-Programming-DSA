//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
for(int row=1;row<=4;row++) {
     for(int col=1;col<=row;col++) {
         printf("* ");
     }
     //when 1 row is printed we need to add a newline
     printf("\n");
}

    return 0;
}