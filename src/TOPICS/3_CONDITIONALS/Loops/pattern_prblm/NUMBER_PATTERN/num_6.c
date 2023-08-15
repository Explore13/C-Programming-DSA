// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
