//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int num;
printf("Enter a number:");
scanf("%d",&num);
int fvalue=num%10,lvalue;
while(num!=0) {
    if(fvalue<=10) {
        lvalue=num;
    }
    num/=10;
}
printf("Sum= %d",fvalue+lvalue);
    return 0;
}