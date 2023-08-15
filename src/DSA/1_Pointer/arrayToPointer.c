// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "malloc.h"

int main(){

// Static : Created inside stack memory
int arr[5];
int *p;
p=arr;
p[0]=1;
p[1]=1;
p[2]=1;
p[3]=1;
p[4]=1;
    for (int i = 0; i < 5; ++i) {
        printf("%d ",*(arr+i));
    }

    printf("\n");

int *pointer;
    pointer=(int *)malloc(5*sizeof (int));
    for (int i = 0; i <5; ++i) {
        scanf("%d",&pointer[i]);
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ",pointer[i]);
    }
    return 0;
}
