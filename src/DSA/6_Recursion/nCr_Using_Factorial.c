// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
long int fact(int);
int comb(int, int);
int main() {
    int n, r;
    printf("Enter n and r for nCr : ");
    scanf("%d %d", &n, &r);
    printf("\nnCr : %d", comb(n, r));
    return 0;
}

long int fact ( int x)
{
    if(x==0)
        return 1;
    else
        return x* fact(x-1);
}

int comb(int n , int r)
{
    long int x,y,z;
    x=fact(n);
    y=fact(r);
    z=fact(n-r);

    return x/(y*z);
}