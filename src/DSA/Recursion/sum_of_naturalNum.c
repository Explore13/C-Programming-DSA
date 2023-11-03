// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int sum(int);

int main() {
int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\nThe sum :  %d", sum(n));
    return 0;
}

int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

/*
 Time Complexity : O(n)
 Space Complexity : O(n)
 */