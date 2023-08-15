//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {
int a,b,c;
printf("Enter 3 angles of a triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180) {
printf("Valid Triangle");
}
else{
    printf("Invalid Triangle");
}

    return 0;
}