// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int arr[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("\nEnter the [%d][%d]th element: ",i,j);
        scanf("%d",&arr[i][j]);
    }
}

printf("\n\n\tElements are:\n\t");
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n\t");
}
for(int i=0;i<5;i++){
    int rowsum=0;
    for(int j=0;j<5;j++){
       rowsum+=arr[i][j];
    }
    printf("\n\tSum of %dth row:%d",i,rowsum);
}
printf("\n");
for(int i=0;i<5;i++){
    int colsum=0;
    for(int j=0;j<5;j++){
       colsum+=arr[j][i];
    }
    printf("\n\tSum of %dth col:%d",i,colsum);
}

    return 0;
}
