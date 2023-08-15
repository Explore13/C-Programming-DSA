// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
int arr[3][3][3]={{{1,2,3},{4,5,6},{7,8,9}},
                  {{1,2,3},{4,11,6}},
                  {{1,2,3},{4,5,6},{7,8,9}}};
int *p;
p=&arr[0][0][0];
  int i=1,j=1,k=1;
//    printf("%d",*(p+(i*3*3)+(j*3)+k));
    printf("%d",*(*(*(arr+1)+1)+1));
    return 0;
}
