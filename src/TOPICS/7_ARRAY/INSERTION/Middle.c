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
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("The Elements:\n");
    for ( i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }

    int pos,val;
    printf("\nEnter the position and value: ");
    scanf("%d %d",&pos,&val);
    if(pos<0||pos>size+1){
        printf("Invalid Input");
    }
    else {
        for (i = size; i >= pos; --i) {
            arr[i] = arr[i - 1];
        }
        arr[i] = val;
        printf("The Elements:\n");
        for (i = 0; i <= size; ++i) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
