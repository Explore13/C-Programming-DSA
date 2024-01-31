// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h) {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];

    for (i = l; i <= h; i++)
        A[i] = B[i];
}


void ImergeSort(int arr[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p = p * 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(arr, l, mid, h);
        }
    }
    if (p / 2 < n)
        Merge(arr, 0, (p / 2)-1, n - 1);
}

int main() {
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5,3};
    int n = 9;
    ImergeSort(A, n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", A[i]);
    }
    return 0;
}
