// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main() {
    int arr[]={4,2,7,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("The Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
//Bubble Sort
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
//Print the array
    printf("\nDescending Order: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
