// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int arr[]={5,0,2,0,0,4,1,3,0};
     int n=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n-1; ++i) {
        for (int j = i; j < n-i-1; ++j) {
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }

    return 0;
}
