//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
void helloworld(int);
int main() {

helloworld(5);
    return 0;
}
void helloworld(int count) {
    if(count==0){
       return ;
    }
    printf("HELLO EXPLORER\n");
     helloworld(count-1);
}