// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

double taylor(int x, int n);

int main() {
    printf("%lf", taylor(5, 4));
    return 0;
}


double taylor(int x, int n) {
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    else {
        r = taylor(x, n-1);
        p = p * x;
        f = f * n;
        return (r + (p / f));
    }
}