// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int target;
    printf("Enter a target number: ");
    scanf("%d", &target);
    int i = 0, j = 6;
    while (i < j) {
        if (arr[i] + arr[j] == target) {
            printf("%d and %d\n", arr[i], arr[j]);
            i++,j--;
        } else if (arr[i] + arr[j] > target)
            j--;

        else i++;
    }

    return 0;
}
