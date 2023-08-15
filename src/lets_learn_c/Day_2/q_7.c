//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int a,b,c;
printf("Enter 3 sides of a triangle:");
scanf("%d %d %d",&a,&b,&c);

if(a+b>c||b+c>a||a+c>b) {
    printf("Valid Triangle");
}
   else {
       printf("Invalid Triangle");
   }
   return 0;
}