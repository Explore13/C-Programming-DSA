// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        int min_index = i;
        int temp = arr[i];
        for (int j = i + 1; j < n; ++j) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

}

int main() {
    int arr[] = {7, 2, 12, 3, 1, 5, 9};
    printf("\nThe Array : ");
    for (int i = 0; i < 6; ++i) {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, 6);
    printf("\nSorted Array : ");
    for (int i = 0; i < 6; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
