//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#define N 10
int main() {
    /*
     it is not an good practice...
     best practice is to define a macro and use it as the length of an array..
     because if we want to change the length of the array now,we have to change in 3 places..but
     if we define macro then we have to change only in 1 place...
     */
//int arr[10];
//for(int i=0;i<10;i++){
//    printf("Enter %d position element:",i);
//    scanf("%d",&arr[i]);
//}
//
//    for(int i=0;i<10;i++){
//        printf("%d position element:%d\n",i,arr[i]);
//    }

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter %d position element:",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<N;i++){
        printf("%d position element:%d\n",i,arr[i]);
    }

    return 0;
}