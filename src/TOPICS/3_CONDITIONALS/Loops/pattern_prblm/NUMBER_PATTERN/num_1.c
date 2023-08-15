// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=(i%2==0)?0:1;
        for(int j=1;j<=3;j++){
            printf("%d ",count);
            (count==1)?count--:count++;
        }
        printf("\n");
    }
    return 0;
}
