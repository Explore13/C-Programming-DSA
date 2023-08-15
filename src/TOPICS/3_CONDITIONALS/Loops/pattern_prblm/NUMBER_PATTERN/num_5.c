// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int n,count=0;
    printf("Enter the row:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        count+=i;
        int temp=count;
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count--;
        }
        count=temp;
        printf("\n");
    }
    return 0;
}
