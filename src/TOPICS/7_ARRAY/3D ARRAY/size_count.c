// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int arr[2][3][4];
    printf("%d\n", sizeof(arr));
/*
 sizeof(arr) represents the size of whole  3D array that is  2*3*4=24*4=96 */
    printf("%d\n", sizeof(arr[0]));
/*
 sizeof(arr[0]) represents the size one 3D array...As two 2D arrays are created here.
 first one denoted by 0 and second one is denoted by 1,here we are only calculating the size of
 0 block....
 3*4=12*4=48
 */
    printf("Num of 2D array:%d\n", sizeof(arr) / sizeof(arr[0]));
/*
 Number of two array created= total size of the 3d array/total size of one block
 sizeof(arr)=96
 sizeof(arr[0])=48
 96/48=2
 */

    printf("2d array row:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
/*
 as we know to calculate the number od rows in a 2d array we have to dividing size of one row
 from size of total 2d matrix..
 here,
 sizeof(arr[0])=48
 sizeof(arr[0][0])=16
 48/16=3
 */
    printf("2d array col:%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));
/*
 as we know that to calculate the number of columns we need to dividing the size of one element
 box from the size of one row..
 here,
 sizeof(arr[0][0])=16
 sizeof(arr[0][0][0])=4
 16/4=4
 */

    return 0;
}
