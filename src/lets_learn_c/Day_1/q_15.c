//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<math.h>
int main() {
int num,count=0,rem;
double check;

    printf("Enter a number to check:");
    scanf("%d",&num);

    int n=num;
    while(n!=0){
        ++count;
        n/=10;
    }
int temp=num;
    while(num!=0){
        rem=num%10;
check=check+pow(rem,count);
num/=10;
    }
    if(check==temp) {
        printf("%d is an Armstrong Number",temp);
    }
    else{
        printf("%d is not an Armstrong Number",temp);

    }
    return 0;
}