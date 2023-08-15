//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int n;
    printf("Enter a value: ");
    scanf("%d",&n);
for(int i=0;i<=n;i++) {
    if(i%2!=0) {
        printf("%d ",i);
    }
    else{
        continue;
    }
}
    return 0;
}