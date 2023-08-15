// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int N,M;
printf("Enter the row and column:");
scanf("%d %d",&N,&M);
int arr1[N][M],arr2[N][M],store[N][M];
printf("\n\n\tEnter elements of arr1:\n\n");
for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        printf("Enter [%d][[%d]th element of arr1:",i,j);
        scanf("%d",&arr1[i][j]);
    }
}
    printf("\n\n\tEnter elements of arr2:\n\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("Enter [%d][[%d]th element of arr2:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            store[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    printf("\n\n3rd array's elements:\n\t");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ",store[i][j]);
        }
        printf("\n\t");
    }
    return 0;
}
