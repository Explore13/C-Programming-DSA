// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int n,range,sum=0;
    printf("Enter the min number:");
    scanf("%d",&n);
    printf("Enter the max number:");
    scanf("%d",&range);
    for(int i=n;i<=range;i++){
        if(i%7==0){
            sum+=i;
        }

    }
    printf("Sum of the numbers:%d",sum);

    return 0;
}
