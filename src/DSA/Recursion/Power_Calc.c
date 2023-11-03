// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int powerCalc(int, int);

int main() {
    int num, pow;
    printf("\nEnter Number and Power : ");
    scanf("%d %d", &num, &pow);
    printf("\n Answer : %d", powerCalc(num, pow));
    return 0;
}

int powerCalc(int num, int pow) {
    static int val = 1;
    if (pow == 0)
        return 1;
    return powerCalc(num, --pow) * num;
}
