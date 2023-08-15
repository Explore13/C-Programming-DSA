//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
while(1) {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int start = (n + 1) / 2;
    int spaceCount = start;
    for (int i = 1; i <= start; i++) {


        for (int c1 = i; c1 <= start; c1++) {
            printf("* ");
        }


        for (int cs = 1; cs <= spaceCount; cs++) {
            if (spaceCount < 3 * start)
                printf("  ");
        }
        spaceCount += 2;


        for (int c1 = i; c1 <= start; c1++) {
            printf("* ");
        }
        printf("\n");
    }


    int spaceCount2 = 3 * start;
    for (int i = 1; i <= start; i++) {

        for (int c1 = i; c1 >= 1; c1--) {
            if (i != 1)
                printf("* ");
        }

        for (int cs = 1; cs < spaceCount2 - 1; cs++) {
            if (i != 1)
                printf("  ");
        }
        spaceCount2 -= 2;

        for (int c1 = i; c1 >= 1; c1--) {//f
            if (i != 1)
                printf("* ");
        }
        if (i != 1)
            printf("\n");
    }

}
    return 0;
}