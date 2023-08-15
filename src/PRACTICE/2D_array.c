// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int arr[2][3]={1,2,3,4,5,6};
int *p=arr[0];
    printf("%d\n",p);
    printf("%d\n",arr);
    printf("%d\n",&arr[0][0]);
    printf("%d\n",&arr);
    printf("%d\n",*arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr+1);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+1)+2);
    printf("%d\n",*(*(arr+1)+2));
    printf("%d\n",**arr);
//    printf("%d\n",**p);
    return 0;
}
