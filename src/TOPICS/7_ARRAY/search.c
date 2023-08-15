//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n;
printf("Enter the number:");
scanf("%d",&n);
for(int i=0;i<10;i++){
    if(arr[i]==n){
        printf("Location: arr[%d]",i);
    }
}

    return 0;
}