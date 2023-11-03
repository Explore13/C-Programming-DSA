#include<stdio.h>

void mergesort(int[], int, int);
void merge(int[], int, int, int);

int a[100];

int main()
{
    int n, i;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    printf("\nThe sorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);      // Sort the left half
        mergesort(arr, mid + 1, high); // Sort the right half
        merge(arr, low, mid, high);    // Merge the sorted halves
    }
}

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}