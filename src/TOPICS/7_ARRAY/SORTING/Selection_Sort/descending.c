// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>

int main() {
    int arr[]={9,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
//selection sort
    for(int i=0;i<n;i++){
        int min_index=i;
        int check=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[min_index] < arr[j]){
                min_index=j;
            }
        }
        arr[i]=arr[min_index];
        arr[min_index]=check;
    }
    //print the array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
