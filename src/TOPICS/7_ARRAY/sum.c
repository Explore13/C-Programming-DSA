//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int arr[]={1,2,3,4,5,6,7,8};
int sum=0;
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    sum+=arr[i];
}
printf("Sum of the array:%d",sum);
    return 0;
}