// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int multp[4]={2,3,5,7};
int arr[4][4][4]={0};
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            arr[i][j][k]=multp[i]*multp[j]*multp[k];
        }
    }
}

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}
