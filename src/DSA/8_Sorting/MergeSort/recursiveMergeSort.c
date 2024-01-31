// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void Merge(int arr[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int brr[100];

    while (i <= mid && j <= h) {
        if (arr[i] < arr[j])
            brr[k++] = arr[i++];
        else
            brr[k++] = arr[j++];
    }

    for (;i <= mid; ++i) {
        brr[k++] = arr[i];
    }
    for (;j <= h; ++j) {
        brr[k++] = arr[j];
    }

    for (int m = 0; m <= h; ++m) {
        arr[m] = brr[m];
    }
}


void recursiveMergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        recursiveMergeSort(arr,l,mid);
        recursiveMergeSort(arr,mid+1,h);
        Merge(arr,l,mid,h);
    }
}
int main() {
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5,3};
    int n = 9;
    recursiveMergeSort(A,0,n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", A[i]);
    }    return 0;
}
