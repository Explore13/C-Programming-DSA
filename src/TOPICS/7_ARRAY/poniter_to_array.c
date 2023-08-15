//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int arr[]={1, 233, 556, 89, 636, 9837, 324};
int *ptr;
ptr=arr;

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    printf("%d ",arr[i]);
}
printf("\n");
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++ ) {

    printf("%d ", *(ptr + i));
}
    return 0;
}
