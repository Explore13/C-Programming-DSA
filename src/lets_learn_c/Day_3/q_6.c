//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int i=1,n,num=0;
printf("Enter a range:");
scanf("%d",&n);
while(i<=n) {
    num+=i;
    i++;
}
printf("Sum= %d",num);
    return 0;
}