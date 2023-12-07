// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int fact(int);

int main() {
int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("%d! = %d",n,fact(n));
    return 0;
}

int fact(int n)
{
    if(n<=1)
        return 1;
    return n*fact(n-1);
}