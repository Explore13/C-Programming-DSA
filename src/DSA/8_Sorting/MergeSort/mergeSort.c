// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void mergeSort(int arr[],int brr[],int newArr[],int m,int n, int s)
{
int i = 0, j = 0, k = 0;
while(i<m && j<n)
{
    if(arr[i] <= brr[j])
    {
        newArr[k++] = arr[i++];
    }
    else
    {
        newArr[k++] = brr[j++];
    }
}

for(i;i<m;i++)
{
    newArr[k++] = arr[i];
}
for(j;j<n;j++)
{
    newArr[k++] = brr[j];
}
}


int main() {
int arr[]= {10,20,30,40,50};
int brr[] = {15,25,35,45,55,65,75,85,95,105};
    int m = sizeof(arr)/ sizeof(arr[0]);
    int n = sizeof(brr)/ sizeof(brr[0]);
    int s = m+n;
int newArr[s];

    mergeSort(arr,brr,newArr,m,n,s);
    for (int i = 0; i < s; ++i) {
        printf("%d ",newArr[i]);
    }
    return 0;
}
