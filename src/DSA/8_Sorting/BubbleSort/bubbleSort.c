// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


void BubbleSort(int arr[] , int n)
{
    int flag = 0;
    for (int i = 0; i < n-1; ++i) {
        flag = 0;
        for (int j = 0; j < n-1-i; ++j) {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }

        }
        if(flag == 0)
            break;
    }
}
int main() {

    int arr[] = {5,4,3,2,1};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%d ",arr[i]);
    }

    printf("\n\n");
    BubbleSort(arr,5);
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr[i]);

    }

    return 0;
}

/*
 Explanation for Me :

 Outer Loop (Loop for passes) :
 Here , n=5
 first `for` loop starts from 0
 If we write i<=n then total passes = 6
 If we write i<n then total passes = 5
 But we know there are 4 passes for n=5 elements
 So, outer loop will be terminated at i<n-1 , total 4 passes

 Inner Loop (Loop for comparison) :

 For every pass,
 comparison will reduce by 1
 So, j will be terminated at j<n-1-j
 */
