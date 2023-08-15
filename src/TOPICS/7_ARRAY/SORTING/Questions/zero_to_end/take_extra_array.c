// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int arr[]={5,0,2,0,0,4,1,3,0};
const int n=sizeof(arr)/sizeof(arr[0]);

int brr[n],index=0;
    for (int i = 0; i < n; ++i) {
        brr[i]=0;
    }

    for (int i = 0; i < n; ++i) {
        if(arr[i]!=0){
            brr[index]=arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",brr[i]);
    }
    return 0;
}
