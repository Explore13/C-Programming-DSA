//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
    int num1, num2, temp = 0;
    printf("Enter a range:");
    scanf("%d %d", &num1, &num2);
        int j = num1;
        do {

            int i=1;
            do{
                if (j % i == 0) {
                    temp += i;
                }
                i++;


            } while(i<j);
            if (j == temp) {

                printf("%d ", j);
                temp = 0;
            } else {
                temp = 0;
            }
            j++;
        } while (j <= num2);

return 0;
    }
