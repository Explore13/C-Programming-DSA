// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int n;
printf("Enter the number of rows:");
scanf("%d",&n);
    for (int i = 1; i <=n; ++i) {
        printf("  *");
        for (int j = 1; j <=3; ++j) {
            (i==1||i==n)?printf("  *"):printf("   ");

        }
        printf("  *\n");

    }
    return 0;
}
