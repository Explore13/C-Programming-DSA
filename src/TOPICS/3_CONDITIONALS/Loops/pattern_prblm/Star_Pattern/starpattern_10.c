// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int n;
printf("Enter the rows:");
scanf("%d",&n);
    for (int i =1; i <=n ; ++i) {
int space=i;
        for (int j =1; j <=space; ++j) {
            printf(" ");
        }
        for (int k=1; k <=4;++k) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
