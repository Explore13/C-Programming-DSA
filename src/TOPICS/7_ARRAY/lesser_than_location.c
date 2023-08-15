//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
/*
 if we give the elements to an array lesser than the  size of an array
 then remaining locations will be filled by the value zero(0)
 */
int arr[5]={1,2,3};
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
    return 0;
}