//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int fun(int num) { /*
 num=435 --> 0 1 1 0 1 1 0 0 1 1
 */
    int count=0;
    while(num){
        count++;/*
 1 1 1 1 1 1 1 1 1
 */
        num>>=1; /* 0 0 1 1 0 1 1 0 0 1
0 0 0 1 1 0 1 1 0 0
 0 0 0 0 1 1 0 1 1 0
 0 0 0 0 0 1 1 0 1 1
 0 0 0 0 0 0 1 1 0 1
 0 0 0 0 0 0 0 1 1 0
 0 0 0 0 0 0 0 0 1 1
 0 0 0 0 0 0 0 0 0 1
 0 0 0 0 0 0 0 0 0 0
 */
    }
return count; //9
}


int main() {
printf("Count= %d",fun(435));

    return 0;
}