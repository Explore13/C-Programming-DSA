//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
//#define N 5
int main() {
    int N=5;
int arr[N];
for(int i=0;i<N;i++){
    printf("Enter %d position value:",i);
    scanf("%d",&arr[i]);
}
for(int k=0;k<N;k++){
    printf("%d ",arr[k]);

}
printf("\n");
for(int j=0;j<N/2;j++){
    int fvalue=arr[j];
    int svalue=arr[N-j-1];

    arr[j]=svalue;
    arr[N-j-1]=fvalue;
}
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}