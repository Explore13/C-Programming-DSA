// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>

int main() {
int *arr;
    arr=(int *) calloc(5,sizeof(int));
    arr=(int*) realloc(arr,7*sizeof(int));
    if(arr==NULL){
        printf("No memory");
    }
    else {
        for (int i = 0; i < 7; ++i) {
            scanf("%d", (arr + i));
        }
        for (int i = 0; i < 7; ++i) {
            printf("%d ", *(arr + i));
        }
    }
    return 0;
}
