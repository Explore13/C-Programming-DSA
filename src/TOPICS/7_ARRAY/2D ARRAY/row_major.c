//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int N,M;
    printf("Enter row and column:");
    scanf("%d %d",&N,&M);
int arr[N][M];
printf("\nEnter Elements:\n");
for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("\nElements Are:\n");
for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}