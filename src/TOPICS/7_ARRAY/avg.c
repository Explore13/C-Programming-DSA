//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int arr[6]={1,2,3,4,5,6};
int size=sizeof(arr)/sizeof(arr[0]),sum=0;
for(int i=0;i<size;i++){
    sum+=arr[i];
}
 float avg= (float)sum/6;
printf("Average=%.2f",avg);
    return 0;
}