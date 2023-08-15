//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int num,count=0;
printf("Enter a number:");
scanf("%d",&num);
    int temp=num;
    if(num==0) {
        count++;
    }
    else {
        while (num != 0) {
            ++count;
            num /= 10;
        }
    }
printf("Digits in the %d= %d",temp,count);
    return 0;
}