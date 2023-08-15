//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int n,arr[10]={0};
printf("Enter a number:");
scanf("%d",&n);

while(n!=0){
    int rem=n%10;
    arr[rem]++;
    n/=10;
}
for(int i=0;i<10;i++){
    printf("\n%d\t%d\n",i,arr[i]);
}
    return 0;
}