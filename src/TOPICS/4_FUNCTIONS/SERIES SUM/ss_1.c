#include <stdio.h>
#include <math.h>

double cos_approx(double x, int n) {
    double result = 1.0; // First term in the series
    double term = 1.0;   // Current term being calculated
    int i;
    for (i = 1; i <= n; i++) {
        term *= -1.0 * x * x / ((2*i) * (2*i-1)); // Calculate next term
        result += term;                            // Add term to result
    }
    return result;
}

int main() {
    double x = 0.5;  // Value of x for which to approximate cos(x)
    int n = 3;       // Number of terms in the approximation
    double approx = cos_approx(x, n);  // Calculate approximation
    double exact = cos(x);             // Calculate exact value using math.h library
    printf("Approximation of cos(%f) with %d terms: %f\n", x, n, approx);
    printf("Exact value of cos(%f): %f\n", x, exact);
    return 0;
}
