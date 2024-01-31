// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    do {
        do { i++; } while (arr[i] <= pivot && i<high);
        while (arr[j] > pivot)
            j--;

        if (i < j)
            swap(&arr[i], &arr[j]);
    } while (i < j);
    swap(&arr[low], &arr[j]);
    return j;
}


void quickSort(int arr[], int low, int high) {
    int j;
    if (low < high) {
        j = partition(arr, low, high);
        quickSort(arr, low, j);
        quickSort(arr, j + 1, high);
    }
}


int main() {
    int n;
    printf("\nEnter the size of array : ");;
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter array elements : \n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nBefore Sorting : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("\nAfter Sorting : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
