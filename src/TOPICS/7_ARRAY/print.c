//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main() {
int size;
printf("Enter the size:");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){

    printf("Enter %d position value:",i);
    scanf("%d",&arr[i]);
}
printf("\tELEMENTS OF THE 5_ARRAY:\n\t");
for(int j=0;j<size;j++){
printf("%d ",arr[j]);
}

    return 0;
}