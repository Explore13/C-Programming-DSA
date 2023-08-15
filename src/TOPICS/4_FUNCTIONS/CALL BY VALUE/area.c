//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

#define PI 3.14

float rec(float, float);

float circle(float);

float square(float);

int main() {

    printf("\n\tFOR RECTANGLE:PRESS 1\n\tFOR CIRCLE:PRESS 2\n\tFOR SQUARE:PRESS 3\n");
    int count;
    float a, b, x, r;
    printf("\tPRESS 1/2/3:");
    scanf("%d", &count);
    if (count == 1) {

        printf("\n\tENTER THE LENGTH OF RECTANGLE:");
        scanf("%f", &a);
        printf("\n\tENTER THE WIDTH OF RECTANGLE:");
        scanf("%f", &b);
        printf("\n\tAREA OF TRIANGLE= %.2f", rec(a, b));
    } else if (count == 2) {

        printf("\n\tENTER THE RADIUS OF CIRCLE:");
        scanf("%f", &r);

        printf("\n\tAREA OF CIRCLE= %.2f", circle(r));
    } else if (count == 3) {

        printf("\n\tENTER THE LENGTH OF SQUARE:");
        scanf("%f", &x);

        printf("\n\tAREA OF SQUARE= %.2f", square(x));
    } else {
        printf("\n\tPLEASE PRESS 1/2/3");
    }
    return 0;
}


float rec(float a, float b) {
    float area = a * b;
    return area;
}

float circle(float r) {

    float area = PI * r * r;
    return area;
}

float square(float x) {
    float area = x * x;
    return area;
}
