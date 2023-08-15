//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int arr[]={3,5,6,4,7};
for(int i=0;i<5/2;i++){
    int a=arr[i];
    int b=arr[5-i-1];
    arr[i]=b;
    arr[5-i-1]=a;
}

for(int j=0;j<5;j++){
    printf("%d ",arr[j]);
}
    return 0;
}