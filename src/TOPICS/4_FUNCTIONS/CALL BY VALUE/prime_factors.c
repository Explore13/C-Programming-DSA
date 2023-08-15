//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
void factor(int);
int prime(int,int);
int main() {

int n;

    printf("Enter a number:");
    scanf("%d",&n);
    factor(n);
    return 0;
}
void factor(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int count=0;
            if(prime(i,count)==0){
                printf("%d\n",i);
            }
        }

    }
}
int prime(int i,int count) {

    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            count++;
        }
    }
    return count;
}