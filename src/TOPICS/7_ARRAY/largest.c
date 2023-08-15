//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int arr[]={12,54,65,87,34};
int temp=arr[0];
for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){

    if(temp<arr[i]) {
        temp=arr[i];
    }
}

printf("Largest number:%d",temp);
    return 0;
}