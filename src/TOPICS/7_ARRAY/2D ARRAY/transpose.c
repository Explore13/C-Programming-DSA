// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int arr[2][3]={{1,2,3},{4,5,6}},swap[3][2];
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        swap[i][j]=arr[j][i];
    }
}

printf("\n\tBefore Swapping:");
printf("\n\t\t");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\n\tTranspose of the matrix:");
    printf("\n\t\t");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",swap[i][j]);
        }
        printf("\n\t\t");
    }
    return 0;
}
