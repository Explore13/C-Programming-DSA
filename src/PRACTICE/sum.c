//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n,rem,sum=0,total=0;
printf("Enter a number:");
scanf("%d",&n);
while(n!=0) {
    rem=n%10;
    sum+=rem;
    n/=10;
}

if(sum>=10){
    while(sum!=0){
        rem=sum%10;
        total+=rem;
        sum/=10;
    }
    printf("Total Sum= %d",total);
}

else {

    printf("Sum= %d",sum);

}
return 0;
}