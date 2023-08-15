//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

    int num,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int j=1;j<=num;j++) {
        for (int i = 2; i < j; i++) {

            if (j % i == 0) {
                ++count;
            } else {
                count += 0;
            }
        }
        if(count==0){

            printf("%d ",j);

        }
        else {
            count=0;
        }
    }

    return 0;
}