// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int n,flag=0;
printf("Enter a number:");
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i==0){
        flag++;
    }
}
if(flag==0) {
    printf("%d is a Prime Number", n);
}
else {
    printf("%d is not a Prime Number",n);
}
    return 0;
}
