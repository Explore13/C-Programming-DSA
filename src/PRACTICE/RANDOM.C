//welcome to Explorer's IDE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 1;
    int max = 35;
    int random_number;

    srand(time(NULL));  // Seed the random number generator

    random_number = (rand() % (max - min + 1)) + min;

    printf("Random number between %d and %d: %d\n", min, max, random_number);

    return 0;
}
