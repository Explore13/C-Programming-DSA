//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int arr[]={100,200,40,12,45};
int  temp=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]>temp)
    {
        temp=arr[i];
    }
}
int var=arr[0];
for(int j=0;j<5;j++ ) {

    if(arr[j]>var && arr[j]<temp)
    {
     var=arr[j];
    }


}
printf("%d",var);
    return 0;

}