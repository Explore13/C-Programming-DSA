//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int num,check=0,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp=num;
    while(num!=0) {
        rem=num%10;
        check=check*10+rem;
        num/=10;
    }
    if(check==temp) {
        printf("%d is a Palindrome Number",temp);

    }
    else{

        printf("%d is not a Palindrome Number",temp);
    }
    return 0;
}