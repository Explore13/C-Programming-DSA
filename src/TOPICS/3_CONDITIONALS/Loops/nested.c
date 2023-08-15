// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int num,max,min;
    for(int i=1;i;i++) {
        printf("\nEnter the Number:");
        scanf("%d", &num);
        if (num==0) {
          break;
        } else {
            if (i == 1) {
                max = num;
                min = num;

                printf("\nMin:%d\nMax:%d", num, num);

            } else {
                if (min < num && max < num) {
                    max = num;
                    printf("\nMin:%d\nMax:%d", min, max);
                } else if (min > num && max > num) {
                    min = num;
                    printf("\nMin:%d\nMax:%d", min, max);


                } else {
                    printf("\nMin:%d\nMax:%d", min, max);

                }
            }
        }
    }

    return 0;
}
