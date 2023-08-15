// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int arr[]={9,7,6,5,4,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
//selection sort
for(int i=0;i<n;i++){
    int temp=arr[i];
    for (int j = i+1; j <n ; ++j) {
        if(temp>arr[j]){
            arr[i]=arr[j];
            arr[j]=temp;
            temp=arr[i];
        }

    }
}
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
