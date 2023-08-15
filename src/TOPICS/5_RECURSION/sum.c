//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int sum(int);
int main() {
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("Sum of first %d natural numbers= %d",n,sum(n));

    return 0;
}
int sum(int n) {

    if(n==1) {
        return 1;
    }


        return n + sum(n - 1);

}