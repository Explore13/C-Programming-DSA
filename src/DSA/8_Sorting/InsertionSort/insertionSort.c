// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

/* Insertion Sort */
void insertionSort(int arr[],int n)
{
    int i,j;
    for (i = 1; i < n; ++i) {
        int x = arr[i];


        /*
        j = i-1;
        while(j > -1 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            --j;
        }
        */

        for (j = i-1; j >=0 && arr[j]>x ; --j) {
            arr[j+1] = arr[j];
        }

        arr[j+1] = x;
    }
}

int main() {
    int arr[] = {8, 10, 2, 12, 3};
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, 5);
    printf("\nAfter Sorting : \n");

    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
Certainly! Here is a step-by-step description of the Insertion Sort algorithm:

1. Start from the second element (index 1) and consider it as the "key".
2. Compare the key with the element before it (element at index `j`).
3. If the key is smaller than the element at index `j`, move the element at index `j` one position ahead.
4. Repeat step 3 until you find an element smaller than the key or reach the beginning of the array.
5. Place the key at the correct position (index `j + 1`).
6. Repeat the process for the remaining unsorted elements.

This process essentially builds up the sorted part of the array by repeatedly inserting the next element in its correct position. The array is sorted when all elements have been considered in this manner.
*/