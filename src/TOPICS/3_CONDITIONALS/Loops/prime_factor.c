//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int n;
printf("Enter a number:");
scanf("%d",&n);
for(int i=2;i<=n;i++){
    if(n%i==0){
        int count=0;
        for(int prime=2;prime<i;prime++){
            if(i%prime==0){
                count++;
            }
        }
        if(count==0){
            printf("%d\n",i);
        }
    }
}

    return 0;
}