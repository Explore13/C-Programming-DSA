//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
long int fact(int);

int main() {
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d! = %ld",n,fact(n));

    return 0;
}
long int fact (int n) {
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}