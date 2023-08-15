// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int count=1;
    for (int row = 1; row <n; ++row) {
        for (int space = 1; space <n-row ; ++space) {
            printf(" ");
        }
        for (int col = 1; col <row ; ++col) {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
