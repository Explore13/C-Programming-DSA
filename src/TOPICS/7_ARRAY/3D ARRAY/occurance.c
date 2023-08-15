// Welcome to EXPLORER's IDE

#include<stdio.h>
int occur(int arr[][2][3],int,int);
int main() {
int arr[2][2][3]={{{1,7,3},{4,7,6}},{{7,8,9},{7,19,11}}};
int x=7;
int result=occur(arr,x,2);
printf("%d is %d times in the array",x,result);
    return 0;
}
int occur(int arr[][2][3],int x,int i){
    int count=0;
    for(int j=0;j<i;j++){
        for(int k=0;k<2;k++){
            for(int f=0;f<3;f++){
                if(arr[j][k][f]==x){
                    count++;
                }
            }
        }
    }
    return count;

}