//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n;
long long int fact=1;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact*=i;
    printf("%d*",i);
}
printf("\b");
    printf("=%lld",fact);
    return 0;
}