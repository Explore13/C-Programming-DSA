//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
long int fact(int);
int main() {
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("Ans= %ld",fact(num));
    return 0;
}
long int fact(int n) {
  return  (n<=1)?1:fact(n-1)*n;
}