//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

    float f;
    printf("Enter temp in Fahrenheit:");
    scanf("%f", &f);
    float c = ((f - 32) / 9) * 5;
    printf("Temp in Centigrade: %f", c);
    return 0;
}