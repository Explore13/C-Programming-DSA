// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
    int arr[2][2][3]={{{1,2,40},{4,5,6}},{{7,8,9},{10,11,12}}},temp=arr[0][0][0];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
            for(int k=0;k<sizeof(arr[0][0])/sizeof(arr[0][0][0]);k++){
                if(temp<arr[i][j][k])
                    temp=arr[i][j][k];
            }
        }
    }
    printf("Sum of the array= %d",temp);
    return 0;
}
