//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int a,b,c;
printf("Enter 3 sides of a triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&b==c) {
    printf("Equilateral Triangle");
}
else if(a==b&&b!=c||a==c&&a!=b||b==c&&b!=a) {
    printf("Isosceles Triangle");
}
else{
    printf("Scalene Triangle");
}
    return 0;
}