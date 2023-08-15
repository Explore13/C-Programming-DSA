// Welcome to EXPLORER's IDE

#include<stdio.h>
void ijk(int arr[][3][4]);
void print(int arr[][3][4]);
int main() {
int arr[2][3][4]={0};

ijk(arr);
print(arr);

    return 0;
}
void ijk(int arr[][3][4]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                arr[i][j][k]=i*j*k;
            }
        }
    }
}
void print(int arr[][3][4]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}