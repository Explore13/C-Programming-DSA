  //WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int n;
printf("Enter a number:");
scanf("%d",&n);
//row
for(int row=1;row<=n;row++){
    //space
    for(int space=1;space<=n-row;space++){
        printf(" ");
    }
    //col
    int num =row;
    for(int col=1;col<=2*row-1;col++){
        if(num>9){
            num=0;
        }
        else if(num<0){
            num=9;
        }
        printf("%d",num);
        if(col>=row){
            num--;
        }
        else{
            num++;
        }
    }
    printf("\n");
}
    return 0;
}