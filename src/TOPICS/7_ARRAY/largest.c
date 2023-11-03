//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int largest(int [],int);
int main() {
int n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }

printf("Largest number:%d", largest(arr,n));
    return 0;
}

int largest (int arr[],int size)
{
    int temp=arr[0];
    for(int i=1;i<size;i++){

        if(temp<arr[i]) {
            temp=arr[i];
        }
    }
    return temp;
}