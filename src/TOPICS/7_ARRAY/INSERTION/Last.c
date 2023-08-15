// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int arr[50],size,i;
    printf("Enter the Size: ");
    scanf("%d",&size);
    if(size>50){
        printf("OverFlow");
        return 1;
    }
    printf("Enter the elements:\n");
    for ( i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("The Elements:\n");
    for ( i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }

    int val;
    printf("\nEnter the value: ");
    scanf("%d",&val);

    arr[size] = val;
    printf("The Elements:\n");
    for (i = 0; i <= size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
