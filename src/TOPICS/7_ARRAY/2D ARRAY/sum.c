//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
int arr[2][3]={{5,7,3},{6,9,2}},sum=0;

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    for(int j=0;j<sizeof(arr[0])/sizeof(int);j++){

        sum+=arr[i][j];

    }
}
printf("Sum of the array= %d",sum);

    return 0;
}