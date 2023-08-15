//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<math.h>

int main() {
    int num, count = 0, rem, val = 0, check;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    while (num > 0) {
        count++;
        num = num / 10;
    }
    check = temp;
    while (temp > 0) {
        rem = temp % 10;

        val = val + (pow(rem, count));

        temp /= 10;

    }


    (check == val)?printf("Armstrong Number"):printf("Not an Armstrong Number");

    return 0;
}