#include <stdio.h>
#include <math.h>

int main() {
    int r, count = 0;
    printf("Enter the radius of the circle:");
    scanf("%d", &r);
    for (int x = -r; x <= r; x++) {
        for (int y = -r; y <= r; y++) {
            if (x*x + y*y == r*r) {
                printf("(%d, %d)\n", x, y);
                count++;
            }
        }
    }
    printf("Number of points with integer coordinates on the circumference: %d\n", count);
    return 0;
}