//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n,sum=0;
printf("Enter a number to check:");
scanf("%d",&n);
for(int i=1;i<n;i++){
    if(n%i==0){
        sum+=i;
    }
}

if(sum==n) {
    printf("\n\t%d is a Perfect Number",n);
}
else {
    printf("\n\t%d is not a Perfect Number",n);

}
    return 0;
}