//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int num;
printf("Enter a range:");
scanf("%d",&num);
for(int i=1;i<=num;i++) {
    for(int j=1;j<=(num-i);j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("*");
    }
    for(int l=1;l<=(num-i);l++){
        printf(" ");
    }
    printf("\n");
}

    return 0;
}