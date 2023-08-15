//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int num1,num2,temp=0;
printf("Enter a range:");
scanf("%d %d",&num1,&num2);
for(int j=num1;j<=num2;j++) {
    for (int i = 1; i < j; ++i) {
        if (j % i == 0) {
            temp += i;
        }
    }

    if (j == temp) {

        printf("%d ", j);
        temp = 0;
    } else {
        temp = 0;
    }

}
    return 0;
}