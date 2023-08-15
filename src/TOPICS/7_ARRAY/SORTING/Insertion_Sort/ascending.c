// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "stdbool.h"
int main() {
int arr[]={7,1,5,3,9,0,2,4,8,21,34,12,17};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<n;i++){
    int min_index=i;
    for (int j = i-1; j >=0 ; --j) {
        if(arr[min_index]<arr[j]){
            int temp=arr[min_index];
            arr[min_index]=arr[j];
            arr[j]=temp;
            min_index=j;

        }
        else {
            break;
        }
    }
}

    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);

    }
    return 0;
}
