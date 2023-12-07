// Welcome to EXPLORER's IDE

/* Using Pascal Triangle */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int comb(int, int);

int main() {
    int n, r;
    printf("Enter n and r for nCr : ");
    scanf("%d %d", &n, &r);
    printf("\nnCr : %d", comb(n, r));
    return 0;
}

int comb(int n, int r) {
    if (r == 0 || n == r)
        return 1;
    else
        return comb(n - 1, r - 1) + comb(n - 1, r);
}