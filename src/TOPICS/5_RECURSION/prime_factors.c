#include <stdio.h>

void prime_factors(int n, int factor) {
    if (n <= 1) { // base case
        return;
    }
    else if (n % factor == 0) { // check if factor is a prime factor
        printf("%d ", factor);
        prime_factors(n / factor, factor);
    }
    else { // increment factor and recursively call function
        prime_factors(n, factor + 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    prime_factors(n, 2); // start with factor 2, since 1 is not a prime factor
    printf("\n");
    return 0;
}
