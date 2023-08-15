//
// Created by surya on 06-04-2023.
//

// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<limits.h>

int main() {
    int num, min = INT_MAX, max = INT_MIN;
    while (1){

        scanf("%d",&num);
        if (num == 0){
            return 0;
        }
        if(num > max)
            max = num;
        if(num < min)
            min = num;

        printf("Max : %d ", max);
        printf("Min : %d ", min);
    }
}

