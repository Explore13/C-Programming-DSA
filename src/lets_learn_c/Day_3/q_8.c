//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int i=1,range,sum=0;
printf("Enter the range:");
scanf("%d",&range);
while(i<=range) {
    if(i%2!=0) {
        sum+=i;
    }
    i++;
}
printf("Sum= %d",sum);
    return 0;
}