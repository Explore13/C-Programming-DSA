//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int num;
printf("Enter a number:");
scanf("%d",&num);
    if(num==0)
    {
        printf("Its Zero");
    }
    else if(num>0){
        printf("Its Positive Number");
    }
    else{
        printf("Its Negative Number");
    }
    return 0;
}