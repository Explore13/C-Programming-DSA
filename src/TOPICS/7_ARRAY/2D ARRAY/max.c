// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int arr[2][3]={{6,7,2},{3,1,2}};
int max=arr[0][0];
for(int row=0;row<2;row++){
    for(int col=0;col<3;col++){
        if(arr[row][col]>max){
            max=arr[row][col];
        }
    }
}
printf("Maximum number=%d",max);
    return 0;
}
