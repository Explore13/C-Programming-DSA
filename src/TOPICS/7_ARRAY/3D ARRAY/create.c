// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int arr[3][4][5];
for(int num=0;num<3;num++){
    for(int row=0;row<4;row++){
        for(int col=0;col<5;col++){
            printf("Enter [%d][%d][%d]th element:",num,row,col);
            scanf("%d",&arr[num][row][col]);
        }
    }
}

    for(int num=0;num<3;num++){
        for(int row=0;row<4;row++){
            for(int col=0;col<5;col++){
                printf("%d ",arr[num][row][col]);

            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}
