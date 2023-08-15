//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int i=1,num,sum=0;
    printf("Enter a range:");
    scanf("%d",&num);
    while(i<=num) {

        if(i%2==0){
            sum+=i;
        }
        else{
            sum+=0;
        }
        i++;
    }
printf("Sum= %d",sum);
    return 0;
}