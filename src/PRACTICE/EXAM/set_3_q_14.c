//Write a C program to calculate product of digits of a number.

//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
int num,pdt=1,rem;
printf("Enter a number:");
scanf("%d",&num);
while(num!=0){
    rem=num%10;
    pdt*=rem;
    num/=10;
}
printf("Product of the digits= %d",pdt);
    return 0;
}