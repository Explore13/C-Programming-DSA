// Welcome to EXPLORER's IDE
//Find two numbers in a given array such that they add up to a specific target number
#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int arr[]={1,2,3,4,5,6,7,8,9,10};
int target=12;
for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
        if(arr[i]+arr[j]==target){
            printf("%d and %d\n",arr[i],arr[j]);
        }
    }
}
    return 0;
}
