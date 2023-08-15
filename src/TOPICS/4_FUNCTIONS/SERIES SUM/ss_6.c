// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

int main() {
int n;
printf("Enter the range:");
scanf("%d",&n);
double sum=0;
int sign=1;
for(int i=1;i<=n;i++){
    sum+=(1.0/fact(i));
    sign*=-1;
}
printf("Sum of the series:%.2lf",sum);
    return 0;
}
