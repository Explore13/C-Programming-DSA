// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int arr[50],size;
    printf("Enter the Size: ");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("The Elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }
return 0;
}
