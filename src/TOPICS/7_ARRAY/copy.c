//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int size;
printf("Enter the size:");
scanf("%d",&size);
int arr[size],cpy[size];

for(int i=0;i<size;i++){
    printf("Enter element %d:",i);
    scanf("%d",&arr[i]);
}
for(int j=0;j<size;j++){
    cpy[j]=arr[j];
}

    for(int k=0;k<size;k++){
        printf("%d ",cpy[k]);
    }
    return 0;
}