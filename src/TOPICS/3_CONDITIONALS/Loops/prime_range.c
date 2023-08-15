// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int n,range;
    printf("Enter the min number:");
    scanf("%d",&n);
    printf("Enter the max number:");
    scanf("%d",&range);
    for(int i=n;i<range;i++){
        int flag=0;
        for(int j=2;j<i;j++) {
            if (i%j== 0) {
                flag++;
            }
        }
        if(flag==0) {
            printf("%d ",i);
        }
    }

    return 0;
}
